#include <type_traits>
#include <iostream>
#include <string>
using namespace std;

template <typename T, typename... Args>
struct has_member_Foo1member
{
private:
    template<typename U> 
    static auto Check(int) -> decltype(
        std::declval<U>().Before(std::declval<Args>()...), std::true_type()
    );
    template<typename U> 
    static std::false_type Check(...);
public:
    enum {
        value = std::is_same<decltype(Check<T>(0)), std::true_type>::value
    };
};
struct  AA
{
    template <typename T>
    void Before(T t) = delete;
    void Before(int i)
    {
        cout << "before from AA" << endl;
    }
    void After(int i)
    {
        cout << "after frome AA" <<endl;
    }
};

template <typename T>
struct function_traits;

template<typename Ret, typename ...Args>
struct function_traits<Ret(Args...)>
{
    typedef Ret function_type(Args...);
    typedef Ret return_type;
    using arity = intergral_constant<int, sizeof...Args()>;

    using std_function_type = function<function_type>;

    template<size_t I>
    struct args
    {
        static_assert(I < arity, "index is out of range,index must less than sizeof Args");
        using type = typename std::tuple_element<I, std::tuple<Args...>>::type;
    };
};

int main()
{

    
    // AA().Before(1.0);
    bool value = has_member_Foo1member<AA, int>::value;
    return 0;
}

#define HAS_MEMBER(member) \
template <typename T, typename... Args> \
struct has_member_##member \
{\
private: \
    template<typename U> static auto Check(int) -> decltype(std::declval<U>().member(std::declval<Args>()...), std::true_type()); \
    template<typename U> static std::false_type Check(...); \
public:\
    enum {\
        value = std::is_same<decltype(Check<T>(0)), std::true_type>::value\
    };\
}; \

//  member(std::declval<Args>()...)
// aspect.After(std::forward<Args>(args)...);

HAS_MEMBER(Foo)
HAS_MEMBER(Before)
HAS_MEMBER(After)

class Nonecopyable {
public:
    Nonecopyable() = default;
    ~Nonecopyable() = default;
private:
    Nonecopyable(const Nonecopyable&) = delete;
    Nonecopyable& operator=(const Nonecopyable&) = delete;
};


template<typename Func, typename... Args>
struct Aspect : Nonecopyable
{
    Aspect(Func&& f) : m_func(std::forward<Func>(f))
    {}
    template<typename T>
    typename std::enable_if<
        has_member_Before<T, Args...>::value&&
        has_member_After<T, Args...>::value
    >::type 
    Invoke(Args&&... args, T&& aspect)
    {
        aspect.Before(std::forward<Args>(args)...);
        m_func(std::forward<Args>(args)...);
        aspect.After(std::forward<Args>(args)...);
    }
    // template<typename T>
    // typename std::enable_if<
    //     !has_member_Before<T, Args...>::value&&
    //     has_member_After<T, Args...>::value
    // >::type 
    // Invoke(Args&&... args, T&& aspect)
    // {
    //     m_func(std::forward<Args>(args)...);
    //     aspect.After(std::forward<Args>(args)...);
    // }
    // template<typename T>
    // typename std::enable_if<
    //     has_member_Before<T, Args...>::value&&
    //     !has_member_After<T, Args...>::value
    // >::type 
    // Invoke(Args&&... args, T&& aspect)
    // {
    //     aspect.Before(std::forward<Args>(args)...);
    //     m_func(std::forward<Args>(args)...);
    // }

    template<typename Head, typename... Tail>
    void Invoke(Args&&... args, Head&& headAspect, Tail&&... tailAspect){
        headAspect.Before(std::forward<Args>(args)...);
        Invoke(std::forward<Args>(args)..., std::forward<Tail>(tailAspect)...);
        headAspect.After(std::forward<Args>(args)...);
    }

private:
    Func m_func;
};

template<typename T> using identity_t = T;

template<typename... AP, typename Func, typename... Args>
void Invoke(Func&& f, Args&&... args)
{
    Aspect<Func, Args...> asp(std::forward<Func>(f));
    asp.Invoke(std::forward<Args>(args)..., identity_t<AP>()...);
}

// struct  AA
// {
//     void Before(int i, string s2)
//     {
//         cout << "before from AA" << endl;
//     }
//     void After(int i, string s2)
//     {
//         cout << "after frome AA" <<endl;
//     }
// };

struct  BB
{
    void Before(int i, string s2)
    {
        cout << "before from BB" << endl;
    }
    void After(int i, string s2)
    {
        cout << "after frome BB" <<endl;
    }
};

void GT(const int & i, string s2)
{
    cout << "from GT" << endl;
}

// int main()
// {
//     Invoke<AA, BB>(&GT, 12, "12sd");
// }
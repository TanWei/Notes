#include <thread>
#include <iostream>
#include <functional>
#include <any>
#include <atomic>
#include <mutex>
#include <string>
#include <type_traits>
using namespace std;
void func(int j, char c)
{
    std::cout << j << c << std::endl;
}
std::mutex m;
class singleton
{
public:
    static singleton* getInstance()
    {
        std::atomic_thread_fence(std::memory_order_acquire);
        if (!instance)
        {
            std::lock_guard<std::mutex> lock(m);
            if (!instance)
            {
                std::atomic_thread_fence(std::memory_order_release);
                instance = new singleton();
            }
        }
        return instance;
    }
private:
    singleton() {}
    singleton operator=(const singleton&) = delete;
    static singleton* instance;
};
struct A
{
    private:
        int a;
};
class B
{
public:
    virtual ~B(){};
private:
    int b;
};

int main()
{
    using T = B*;
    bool val = std::is_trivially_copyable<T>::value;
    val = std::is_copy_constructible<T>::value;
    val = std::is_move_constructible<T>::value;
    val = std::is_copy_assignable<T>::value;
    val = std::is_move_assignable<T>::value;
    // std::any a1(100);
    std::atomic<T> temp;
    val = temp.is_lock_free();
    auto f1 = std::bind(func, 12, 'a');
    std::thread t(f1);
    t.join();
    // t.detach();
    // _sleep(1000);
}
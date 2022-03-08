#include <list>
#include <thread>
#include <functional>
#include <memory>
#include <atomic>
#include "syncqueue.hpp"

const int MaxTaskCount = 100;
class ThreadPool
{
public:
    using Task = std::function<void()>;
    ThreadPool(int numThreads = std::thread::hardware_concurrency()):
        m_queue(MaxTaskCount)
    {
        
    }
    ~ThreadPool(void){
        Stop();
    }

    void Stop()
    {
        std::call_once(m_flag, [this](){ StopThreadGroup(); });
    }
private:
    void start(int numThreads)
    {
        m_running = true;
        for (int i=0; i<numThreads; i++)
        {
            m_threadgroup.push_back(std::make_shared<std::thread>(&ThreadPool::RunInThread, this));
        }
    }
    void RunInThread()
    {
        while (m_running)
        {
            std::list<Task> list;
            m_queue.Take(list);

            for (auto& task : list)
            {
                if (!m_running)
                {
                    return;
                }
                task();
            }
        }
    }

    void StopThreadGroup()
    {
        m_queue.Stop();
        m_running = false;

        for (auto th : m_threadgroup)
        {
            if (th)
            {
                th->join();
            }
        }
        m_threadgroup.clear();
    }

    std::list<std::shared_ptr<std::thread>> m_threadgroup;
    SyncQueue<Task> m_queue;
    atomic_bool m_running;
    std::once_flag m_flag;

};

template<typename T>
struct function_traits;

template<typename Ret, typename...Args>
struct function_traits<Ret(Args...)>
{
    typedef Ret function_type(Args...);
    typedef Ret return_type;
    using arity = std::integral_constant<int, sizeof...(Args)>;

    template <size_t I>
    struct args{
        using type = typename tuple_element<I, tuple<Args...>>::type;
    };
};
template<typename Ret, typename...Args>
struct function_traits<Ret(*)(Args...)> : public function_traits<Ret(Args...)>{};

int main()
{
    auto thpool = std::make_shared<ThreadPool>();
}
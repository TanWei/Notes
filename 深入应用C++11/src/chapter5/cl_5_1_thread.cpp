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
        instance.load(std::memory_order_relaxed);
        std::atomic_thread_fence(std::memory_order_acquire);
        if (!instance)
        {
            std::lock_guard<std::mutex> lock(m);
            instance.load(std::memory_order_relaxed);
            if (!instance)
            {
                std::atomic_thread_fence(std::memory_order_release);
                instance.store(new singleton());
            }
        }
        return instance;
    }
private:
    singleton() {}
    singleton operator=(const singleton&) = delete;
    static std::atomic<singleton*> instance;
};

// 内存栅栏：https://preshing.com/20130922/acquire-and-release-fences/

std::atomic<Singleton*> Singleton::m_instance;
std::mutex Singleton::m_mutex;
 
Singleton* Singleton::getInstance() {
    Singleton* tmp = m_instance.load(std::memory_order_relaxed);
    // 防止fence后的操作，重排到fence前的任意load之前
    std::atomic_thread_fence(std::memory_order_acquire); 
    if (tmp == nullptr) { // 问题：内存重排new，导致tmp不等于nullptr，但可能没初始化完成
        std::lock_guard<std::mutex> lock(m_mutex);
        tmp = m_instance.load(std::memory_order_relaxed);
        if (tmp == nullptr) {
            tmp = new Singleton;
            // 防止fence前的操作，重排到fence后的任意store之后
            std::atomic_thread_fence(std::memory_order_release); 
            m_instance.store(tmp, std::memory_order_relaxed);
        }
    }
    return tmp;
}

// std::atomic<Singleton*> Singleton::m_instance;
// std::mutex Singleton::m_mutex;
 
// Singleton* Singleton::getInstance() {
//     Singleton* tmp = m_instance.load();
//     if (tmp == nullptr) {
//         std::lock_guard<std::mutex> lock(m_mutex);
//         tmp = m_instance.load();
//         if (tmp == nullptr) {
//             tmp = new Singleton;
//             m_instance.store(tmp);
//         }
//     }
//     return tmp;
// }

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
    std::atomic<int> at;
    at.store(0);
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
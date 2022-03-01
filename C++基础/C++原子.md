## C++ memory order循序渐进（一）—— 多核编程和memory model
### 互斥、lock-free和wait-free
#### 2.1 互斥
最简单大家也最熟悉的的临界区保护技术自然是互斥，每个线程访问之前都需要获得互斥锁，如果被别的线程占用了就阻塞等待。这是一种典型的悲观锁算法，很明显，当进入临界区的线程发生阻塞，或被操作系统换出时，会出现全局阻塞，因为获得锁的线程被换出无法执行操作，而未获得锁的线程也只能一同等待，出现了阻塞传播，如果另一个线程先进入临界区，有可能反而可以更快顺利完成。因为存在全局阻塞的可能性，采用互斥技术进行临界区保护的算法有着最低的阻塞容忍能力。
#### 2.2 lockfree  
维基百科上的定义如下：
Lock free允许单独的线程个体阻塞，但是会保证系统整体上的吞吐，如果一个算法对应的程序的线程在运行了足够长时间的情况下，至少有一个线程取得了进展，那么我们说这个算法是lock-free的。
```
#include <atomic>
class SpinLock {
public:
    SpinLock() : flag_(false) {}
    void lock() {
        bool expect = false;
        while (
            !flag_.compare_exchange_weak(expect, true)
        ) {
            // 这里一定要将expect复原，执行失败 expect结果是未定的
            expect = false;
        }
    }
    void unlock() {
        flag_.store(false);
    }
private:
    std::atomic<bool> flag_;
};

```
### 2.3 wait-free

## 3. Memory model


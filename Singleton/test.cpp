#include <iostream>
#include <thread>
#include <vector>

#include "singleton.hpp"

void worker(int id)
{
    Singleton& instance = Singleton::getInstance();

    std::cout << "Thread " << id << " Instance Address: " << &instance << std::endl;
}

int main()
{
    // 所有线程打印的地址应该完全相同：
    // 说明只创建了一个对象。
    std::vector<std::thread> threads;

    for (int i = 0; i < 5; ++i)
    {
        threads.emplace_back(worker, i);
    }

    for (auto& t : threads)
    {
        t.join();
    }

    return 0;
}
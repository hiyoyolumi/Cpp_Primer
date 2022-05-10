#include <iostream>
#include <thread>
#include <mutex>


void test()
{
	std::mutex M;
	std::mutex N;

	std::thread thread_a([&](){
		//锁住互斥量
		M.lock();
		N.lock();

		change("thread a");

		//解锁互斥量
		M.unlock();
		N.lock();
		});

	std::thread thread_b([&]() {
		//锁住互斥量
		M.lock();
		N.lock();

		change("thread b");

		//解锁互斥量
		M.unlock();
		N.lock();
	});

	thread_b.join();
	thread_a.join();
}

int main() {
    test();
    return 0;
}
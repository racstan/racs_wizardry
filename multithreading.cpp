#include <iostream>
#include <thread>

void threadFunction(int threadId) {
    std::cout << "Thread " << threadId << " is running." << std::endl;
}

int main() {
    const int numThreads = 3;
    std::thread threads[numThreads];

    for (int i = 0; i < numThreads; ++i) {
































#include <iostream>

template <typename T>
void printValues(T value) {
    std::cout << value << std::endl;
}

template <typename First, typename... Rest>

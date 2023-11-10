#include <iostream>

template <typename T>
void printValues(T value) {
    std::cout << value << std::endl;
}

template <typename First, typename... Rest>
void printValues(First first, Rest... rest) {
    std::cout << first << ", ";
    printValues(rest...);
}
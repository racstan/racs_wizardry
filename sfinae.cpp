#include <iostream>
#include <type_traits>

template <typename T, typename = std::enable_if_t<std::is_integral_v<T>>>
void printValue(T value) {
    std::cout << "Value: " << value << std::endl;
}

template <typename T, typename = std::enable_if_t<!std::is_integral_v<T>>>
void printValue(T value) {
    std::cout << "Not an integral value" << std::endl;
}

int main() {
printValue(42);
printValue(3.14);
printValue("Hello");
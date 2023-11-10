#include <iostream>
#include <type_traits>

template <typename T, typename = std::enable_if_t<std::is_integral_v<T>>>
void printValue(T value) {
    std::cout << "Value: " << value << std::endl;
}
#include <iostream>
#include <type_traits>

template <typename T>
void printTypeInfo() {
    std::cout << "Type: " << typeid(T).name() << std::endl;
    if (std::is_integral<T>::value) {


















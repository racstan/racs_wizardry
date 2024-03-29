#include <iostream>
#include <type_traits>

template <typename T>
void printTypeInfo() {
    std::cout << "Type: " << typeid(T).name() << std::endl;
    if (std::is_integral<T>::value) {
        std::cout << "This is an integer type." << std::endl;
    } else {
        std::cout << "This is not an integer type." << std::endl;
}
    if (std::is_floating_point<T>::value) {
        std::cout << "This is a floating-point type." << std::endl;
    } else {
        std::cout << "This is not a floating-point type." << std::endl;
}
    if (std::is_class<T>::value) {
        std::cout << "This is a class or struct type." << std::endl;
    } else {
        std::cout << "This is not a class or struct type." << std::endl;
}

    std::cout << "----------------------------------" << std::endl;
}

int main() {
    printTypeInfo<int>();
    printTypeInfo<double>();
    printTypeInfo<char>();
    printTypeInfo<std::string>();
    printTypeInfo<struct MyStruct>{};

    return 0;
}














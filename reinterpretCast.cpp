#include <iostream>

int main() {
    int value = 10;
    int* ptr = &value;
    char* charPtr = reinterpret_cast<char*>(ptr);

    std::cout << "Value: " << value << std::endl;
    std::cout << "Pointer address: " << ptr << std::endl;
    std::cout << "Character pointer address: " << charPtr << std::endl;

    return 0;
}



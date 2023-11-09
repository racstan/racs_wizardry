#include <iostream>

int main() {
    int value = 10;
    int* ptr = &value;
    char* charPtr = reinterpret_cast<char*>(ptr);

    std::cout << "Value: " << value << std::endl;





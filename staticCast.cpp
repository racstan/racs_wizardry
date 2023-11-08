#include <iostream>

int main() {
    double myDouble = 3.14;
    int myInt = static_cast<int>(myDouble);

    std::cout << "Double value: " << myDouble << std::endl;
    std::cout << "Int value after casting: " << myInt << std::endl;

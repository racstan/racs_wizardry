#include <iostream>

void functionOnStack() {
    int stackVariable = 42; 
    std::cout << "Inside functionOnStack: " << stackVariable << std::endl;
}
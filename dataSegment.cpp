#include <iostream>

// Define and initialize global variables
int globalVariable = 42;
static int staticVariable = 10;

int main(){
    std::cout << "Global variable: " << globalVariable << std::endl;
    std::cout << "Static variable: " << staticVariable << std::endl;

}
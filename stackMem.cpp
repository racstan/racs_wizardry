#include <iostream>

void functionOnStack() {
    int stackVariable = 42; 
    std::cout << "Inside functionOnStack: " << stackVariable << std::endl;
}

int main(){
    int mainVariable = 69;
        std::cout << "Inside main: " << mainVariable << std::endl;
        functionOnStack();
        
        std::cout << "Back inside main: " << mainVariable << std::endl;

}
#include <iostream>

class Animal{
    public:
    void speak(){
        std::cout << "Animal speaks" << std::endl;
    }
};

class Mammal : public virtual Animal {
public:
    void giveBirth() {
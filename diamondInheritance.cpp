#include <iostream>

class Animal{
    public:
    void speak(){
        std::cout << "Animal speaks" << std::endl;
    }
};

class Mammal : public virtual Animal {
};

class Bird : public virtual Animal {
};

class Bat : public Mammal, public Bird {
public:
    void fly() {

#include <iostream>

class Animal {
    public:
    virtual void makeSound() {
        std::cout << "Animal sound" << std::endl;
}
};
class Dog : public Animal {
public:

#include <iostream>

class Animal {
    public:
    virtual void makeSound() {
        std::cout << "Animal sound" << std::endl;
}
};
class Dog : public Animal {
public:
    void makeSound() override {
        std::cout << "Bark" << std::endl;

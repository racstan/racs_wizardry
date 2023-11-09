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
 }

    void fetch() {
        std::cout << "Fetching the ball" << std::endl;
}
};       
int main() {
    double myDouble = 3.14;
    int myInt = static_cast<int>(myDouble);

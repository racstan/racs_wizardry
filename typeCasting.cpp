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
    std::cout << "static_cast: " << myInt << std::endl;
    Animal* animalPtr = new Dog();
    Dog* dogPtr = dynamic_cast<Dog*>(animalPtr);
    if (dogPtr) {
        std::cout << "dynamic_cast: ";
        dogPtr->makeSound();
        dogPtr->fetch();
} else {
    std::cout << "dynamic_cast failed" << std::endl;
}
    delete animalPtr;
    const int constValue = 42;
    int& nonConstRef = const_cast<int&>(constValue);
    nonConstRef = 99;
    std::cout << "const_cast: " << nonConstRef << std::endl;

    int intValue = 123;
    double* doublePtr = reinterpret_cast<double*>(&intValue);
    std::cout << "reinterpret_cast: " << *doublePtr << std::endl;
    return 0;
}

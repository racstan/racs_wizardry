#include <iostream>

class Base {
    public:
        virtual void print() {
        std::cout << "Base class" << std::endl;

}
};

class Derived : public Base {
public:
    void print() override {

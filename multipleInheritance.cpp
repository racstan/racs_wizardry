#include <iostream>

class A{
    public:
        void printA() {
        std::cout << "Class A" << std::endl;
    }
};

class B {
    public:
    void printB() {
        std::cout << "Class B" << std::endl;
  }
};

class C : public A, public B {
public:
    void printC() {
        std::cout << "Class C" << std::endl;
}
};
}
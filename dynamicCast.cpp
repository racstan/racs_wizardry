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
        std::cout << "Derived class" << std::endl;
}
};
int main() {
    Base baseObj;
    Derived derivedObj;

    Base* basePtr = &derivedObj;

    Derived* derivedPtr = dynamic_cast<Derived*>(basePtr);

    if (derivedPtr) {
        std::cout << "Dynamic cast successful:" << std::endl;
        derivedPtr->print();
    } else {
        std::cout << "Dynamic cast failed" << std::endl;
 }
 return 0;
}



//write a code for weak pointer
#include <iostream>
#include <memory>
using namespace std;

class A {
    public:
    A() { cout << "A()" << endl; }
    ~A() { cout << "~A()" << endl; }
};

class B {
    public:
    B() { cout << "B()" << endl; }
    ~B() { cout << "~B()" << endl; }
}
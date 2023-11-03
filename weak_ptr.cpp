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
};

int main(){
    shared_ptr<A> a(new A());
    shared_ptr<B> b(new B());
    weak_ptr<A> w(a);
    return 0;
}


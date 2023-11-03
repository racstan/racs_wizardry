#include <iostream>
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
    unique_ptr<A> a(new A());
    unique_ptr<B> b(new B());
    return 0;
}
#include <iostream>

int main() {
    const int constValue = 42;
    int nonConstValue = 0;

    const int* ptrToConstValue = &constValue;
    int* ptrToNonConstValue = &nonConstValue;

    int& refToConstValue = const_cast<int&>(constValue);
    refToConstValue = 100;

#include <iostream>

int main() {
    const int constValue = 42;
    int nonConstValue = 0;

    const int* ptrToConstValue = &constValue;
    int* ptrToNonConstValue = &nonConstValue;

    int& refToConstValue = const_cast<int&>(constValue);
    refToConstValue = 100;

    std::cout << "constValue after modification: " << constValue << std::endl;

    int* ptrToNonConstFromConst = const_cast<int*>(ptrToConstValue);
    *ptrToNonConstFromConst = 200;

    std::cout << "constValue via ptrToConstValue after modification: " << *ptrToConstValue << std::endl;

    const int* ptrToConstFromNonConst = const_cast<const int*>(ptrToNonConstValue);

    return 0;
}   
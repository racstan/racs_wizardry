#include <iostream>
using namespace std;

struct intPair{
    int x;
    int y;

};

intPair swap(int& x, int& y){
    int temp;
    temp =x;
    x=y;
    y=temp;
    intPair result;
    result.x = x;
    result.y = y;
    return result;
}
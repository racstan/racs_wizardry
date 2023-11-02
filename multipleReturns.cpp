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

int main(){
    int a, b;
    cout<<"Enter two numbers"<<endl;
    cin>>a;
    cin>>b;
    intPair result = swap(a,b);
    cout<<"Swapped numbers are "<<result.x<<" and "<<result.y<<endl;
}
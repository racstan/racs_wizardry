//This program uses recursion to find the factorial of a number
#include <iostream>
using namespace std;
int fact(int n){
    if( n ==0|| n==1){
        return 1;
    }
    else{
    return(n*fact(n-1));
}
}

int main(){
    int n;
    cout<<"Enter a number to find the factorial: ";
    cin>>n;
    cout<<"The factorial of the number: "<<n<<" is: "<<fact(n);
    return 0;
}
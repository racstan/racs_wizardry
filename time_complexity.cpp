#include <iostream>
using namespace std;

int swap(int *ptr1, int* ptr2){
    int temp= *ptr1;
    *ptr1= *ptr2;
    *ptr2 =temp;
    return 0;
}
int main(){
    int value1=10;
    int value2=20;
    int *p1= &value1;
    int *p2 = &value2;
    swap(*p1,*p2);
    cout<<value1<<endl;
    cout<<value2<<endl;

    //dynamically allocate memory to store an integer
    int *pvalue = new int;
    *pvalue = 10;
    if(pvalue==nullptr){
        cout<<"Error: memory could not be allocated";
    }
    else{
        cout<<"value of pvalue: "<<*pvalue<<endl
    }
    delete pvalue;

    pvalue = nullptr;
}
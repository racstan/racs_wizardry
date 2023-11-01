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
    int arrSize = 5;
    int* arrPtr = new int[arrSize]; 

    if (arrPtr) {
        for (int i = 0; i < arrSize; i++) {
            arrPtr[i] = i * 10; 
        }

        std::cout << "Array elements: ";
        for (int i = 0; i < arrSize; i++) {
            std::cout << arrPtr[i] << " ";
        }
        std::cout << std::endl;

        delete[] arrPtr; 
        std::cout << "Memory deallocated." << std::endl;
    } else {
        std::cout << "Memory allocation failed." << std::endl;
    }
}
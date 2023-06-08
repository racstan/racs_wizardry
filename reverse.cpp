#include <iostream>
using namespace std;
int main(){
    int n,tempInt;
    cout<<"Enter size of the array"<<endl;
    cin>>n;
    int* arr = new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"The original array is"<<endl;
    for(int i=0;i<n;i++){
        
        cout<<arr[i]<<" ";
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
        tempInt = arr[i];
        arr[i] = arr[j];
        arr[j] = tempInt;
    }
    }
    
    cout<<endl;
    cout<<"The reversed array is"<<endl;
    for(int i=0;i<n;i++){
        
        cout<<arr[i]<<" ";
    }
    delete[] arr;
    return 0;
}
#include <iostream>
using namespace std;

int main(){
    int n;
    int temp;
    cout<<"Enter number of elements"<<endl;
    cin>>n;
    int* arr = new int[n];
    bool* flag = new bool[n];
    for(int i=0;i<n;i++){
        flag[i]=false;
    }
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Array without sorting"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    for(int i=0; i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp = arr[i];
                arr[i]= arr[j];
                arr[j]= temp;

            }
        }
    }
    cout<<"Array after sorting"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"Checking for duplicate elements"<<endl;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                flag[i]=true;
            }
        }
    }

    for(int i=0;i<n;i++){
        if(flag[i]==true){
            cout<<"Duplicate element: "<<arr[i]<<endl;
        }
    }
    delete[] arr;
    delete[] flag;
    return 0;
}
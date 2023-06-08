#include <iostream>
#include <array>
using namespace std;

int main(){
    int n;
    int temp, temp2;
    cout<<"Enter number of elements"<<endl;
    cin>>n;
    int* arr = new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]<arr[j]){
                temp=arr[i];
            }
            else if(arr[i]>arr[j]){
                temp2=arr[i];
            }
        }
    }
    cout<<"The maximum element of the array is "<<temp2<<endl;
    cout<<"The minimum element of the array is "<<temp<<endl;
    delete[] arr;
    return 0;
}
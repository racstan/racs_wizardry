#include<iostream>
using namespace std;

int main(){
    int size;
    int target;
    bool flag = false;
    cout<<"Enter size: ";
    cin>>size;
    cout<<"Enter the elements";
    int *arr = new int[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Enter the target: ";
    cin>>target;
    for(int i=0;i<size;i++){
        for(int j=i+1; j<size;j++){
            if(arr[i]+arr[j]==target){
                flag = true;
                cout<<"The elements are "<<arr[i]<<" "<<arr[j]<<" with positions ["<<i<<"] and ["<<j<<"]"<< endl;
            }
            flag =false;
        }
    }
    delete[] arr;
    return 0;
}

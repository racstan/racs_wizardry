#include <iostream>
using namespace std;

void subarrays(int arr[],int size){
    for(int i =0;i<size;i++){
        for(int j=i;j<size;j++){
            for(int k=i;k<=j;j++){
                cout<<arr[k]<<" ";
            }
        }
        cout<<endl;
    }
}
int main(){
    int arr[]={1,2,3,4,5};
    int size = 5;
    subarrays(arr,size);
    return 0;
}
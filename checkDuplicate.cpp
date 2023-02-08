#include <iostream>
using namespace std;

void checkDuplicate(int arr[],int size){
    int count =0;
    bool processed[100]={false};
    for(int i =0; i<size;i++){
        if(processed[i]==true){
            continue;
        }
        for(int j= i+1; j<size; j++){
            if(arr[i]==arr[j]){
                count++;
                processed[j]= true;
            }
        }
        if(count>=0){
            cout<<"The count of the number"<<arr[i]<<" is "<<count+1<<endl;
        }
        count=0;
    }
}

int main(){
    int arr[]={2,3,4,5,2,3,7,6,9,12,34};
    int sizearr = sizeof(arr)/sizeof(arr[0]);
    checkDuplicate(arr,sizearr);
    return 0;
}
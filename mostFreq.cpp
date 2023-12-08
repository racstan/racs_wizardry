//Given an integer array and an integer k, return the k most frequent elements
#include <iostream>
using namespace std;

void mostFreq(int arr[],int size, int k){
    int* count = new int[size];
    int sum =0;
    int max =0;
    int tempCount =k;
    int tempElement = 0;  
    if(k<=size){
    for(int i=0;i<size;i++){ 
        for(int j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                sum+=1;
            }
        }
        count[i]=sum;
        sum =0;
    }
    while(tempCount>0){
    for(int i =0; i<size; i++){
        if(count[i]>max){
            max = count[i];
            tempElement = arr[i];
        }
    } 
    if(max>0){
    cout<<"The element with: "<<(max+1)<<" frequency is: "<<tempElement<<endl;
    } 
    for(int i=0; i<size; i++){
        if(arr[i]==tempElement){
            count[i]=-1;
        }  
    } 
    max = 0;  
    tempElement =0;
    tempCount--;
    }  
    }   
    else{    
        cout<<"The value of k cannot be greater than the size of the array";
    }
}

int main(){
    int size ,k;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int* arr = new int[size];
    cout<<"Enter the elements of the array";
    for(int i =0; i<size;i++){
        cin>>arr[i];
    }
    cout<<"Enter the number to return the most frequent element in the array";
    cin>>k;
    mostFreq(arr,size,k);
    delete[] arr;
    return 0;
}



#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int>array, int left , int right , int mid){
    int leftSubArraySize = mid - left +1;
    int rightSubArraySize = right- mid;

    vector<int>leftArray(leftSubArraySize);
    vector<int>rightArray(rightSubArraySize);
    for(int i =0;i<leftSubArraySize;i++){
        leftArray[i]=array[left+i];
    }
    for(int j=0;j<rightSubArraySize;j++){
        rightArray[j]=array[mid+1+j];
    }

    int i=0;
    int j=0;
    int k=left;

    while(i<leftSubArraySize&&j<rightSubArraySize){
        if(leftArray[i]<=rightArray[j]) {
            array[k] = leftArray[i];
            i++;
        }else{
            array[k]=rightArray[j];
            j++;
        }
        k++;
    }

    while(i<leftSubArraySize){
        array[k]=leftArray[i];
        i++;
        k++;
    }
    while(i<rightSubArraySize){
        array[k]=rightArray[j];
        j++;
        k++;
    }
}

void mergeSort(vector<int>& arr, int left, int right){
    if(left<right) {
        int mid = (left + (right - left)) / 2;


        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, right, mid);
    }
}

int main(){
    vector<int> arr={54,23,12,90,89,4,-1};
    int arr_size = arr.size();
    mergeSort(arr,0,arr_size-1);
    for(int i =0;i<arr_size;i++){
        cout<<arr[i]<<" ";
    }
}
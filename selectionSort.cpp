#include <iostream>
using namespace std;

void swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = a;
}
     
void selectionSort(int arr[], int size) {
    int minIndex = 0;
    for (int i = 0; i < size; ++i) {
        minIndex = i;
    for (int i = 0; i < size; ++i) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            } 
        } 
        if (minIndex != i) {
            swap(arr[i], arr[minIndex]);
        }
    }
}   
     
void get(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    } 
}

int main() { 
    int arr[5] = { 35,43,23,12,76 };
}  
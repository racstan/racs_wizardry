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

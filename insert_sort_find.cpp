#include <iostream>
using namespace std;

void insertion_sort(int numbers[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = numbers[i];
        j = i-1;
        while (j >= 0 && numbers[j] > key) {
            numbers[j+1] = numbers[j];
            j = j-1;
        }
        numbers[j+1] = key;  
    }
}

int find_position(int numbers[], int n, int k) {
    insertion_sort(numbers, n);
    for (int i = 0; i < n; i++) {
        if (numbers[i] == k) {
            return i + 1;
        }
    }
    return -1;
}

int main() {
    int n, k;
    const int MAX_N=100;
    cout << "Enter the number of elements: ";
    cin >> n;
    int numbers[MAX_N];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }
    cout << "Enter the number k: ";
    cin >> k;
    int pos = find_position(numbers, n, k);
    if (pos == -1) {
        cout << k << " is not found in the array." << endl;
    } else {
        cout << "The position of " << k << " in the sorted array is: " << pos << endl;
    }
    return 0;
}
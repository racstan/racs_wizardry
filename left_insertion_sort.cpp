#include <iostream>
using namespace std;

void left_insertion_sort(int numbers[], int n) {
    for (int i = 1; i < n; i++) {
        int key = numbers[i];
        int j = i - 1;
        while (j >= 0 && numbers[j] > key) {
            numbers[j + 1] = numbers[j];
            j--;
        }
        numbers[j + 1] = key;
    }
}

int main() {
    int n;
    const int MAX_N=100;
    cout << "Enter the number of elements: ";
    cin >> n;
    int numbers[MAX_N];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }
    left_insertion_sort(numbers, n);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << numbers[i] << " ";
    }
    return 0;
}
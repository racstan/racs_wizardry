#include <iostream>
using namespace std;

void recursive_insertion_sort(int numbers[], int n) {
    if (n <= 1) return;
    recursive_insertion_sort(numbers, n - 1);
    int key = numbers[n - 1];
    int j = n - 2;
    while (j >= 0 && numbers[j] > key) {
        numbers[j + 1] = numbers[j];
        j--;
    }
    numbers[j + 1] = key;
}

int main() {
    int n;
    const int MAX_N =100;
    cout << "Enter the number of elements: ";
    cin >> n;
    int numbers[MAX_N];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }
    recursive_insertion_sort(numbers, n);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << numbers[i] << " ";
    }
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

int total = 0;

void merge(vector<int> &arr, int l, int m, int r) {
    int count =0;
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    vector<int> L(n1), R(n2);

    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
        count++;
        total++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
    cout << "Number of comparisons: " << count << endl;
}

void mergeSort(vector<int> &arr, int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

int main() {
    vector<int> arr = {10,14,7,3,12,5,4,1};
    int n = arr.size();
    cout<<"Original array: \n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
        cout<<endl;
    mergeSort(arr, 0, n - 1);
    
    cout << "Sorted array: \n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
 cout<<"\nTherefore the total number of comparisions are "<<total<<endl;
    return 0;
}

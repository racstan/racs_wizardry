#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int>& A, int X, int Y) {
    int N = A.size();
    int totalCost = 0;

    for (int i = 0; i < X; ++i) {
        totalCost += A[i];
    }

    for (int i = X; i < N; ++i) {
        totalCost = min(totalCost + Y, totalCost + A[i]);
    }

    return totalCost;
}

int main() {
    vector<int> A1 = {4, 3, 2, 7};
    int X1 = 2, Y1 = 2;
    cout << "Minimum cost: " << solution(A1, X1, Y1) << endl;

    vector<int> A2 = {10, 3, 4, 7};
    int X2 = 2, Y2 = 3;
    cout << "Minimum cost: " << solution(A2, X2, Y2) << endl;

    vector<int> A3 = {4, 2, 5, 4, 3, 5, 1, 4, 2, 7};
    int X3 = 3, Y3 = 2;
    cout << "Minimum cost: " << solution(A3, X3, Y3) << endl;

    return 0;
}

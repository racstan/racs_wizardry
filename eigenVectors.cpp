#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

vector<double> multiply(vector<vector<double>> A, vector<double> x) {
    int n = A.size();
    vector<double> result(n, 0.0);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            result[i] += A[i][j] * x[j];
        }
    }

    return result;
}

double normalize(vector<double> &x) {
    double norm = 0.0;
    int n = x.size();

    for (int i = 0; i < n; i++) {
        norm += x[i] * x[i];
    }

    norm = sqrt(norm);

    for (int i = 0; i < n; i++) {
        x[i] /= norm;
    }

    return norm;
}

vector<double> power_iteration(vector<vector<double>> A, double tol=1e-6, int max_iter=1000) {
    int n = A.size();
    vector<double> x(n, 1.0);
    double lambda = 0.0;
    double lambda_old = 0.0;

    for (int i = 0; i < max_iter; i++) {
        vector<double> Ax = multiply(A, x);
        lambda_old = lambda;
        lambda = normalize(Ax);
        if (fabs(lambda - lambda_old) < tol) {
            break;
        }
        x = Ax;
    }

    return x;
}

int main() {
    int n;
    cout << "Enter the size of the matrix: ";
    cin >> n;

    vector<vector<double>> A(n, vector<double>(n, 0.0));
    cout << "Enter the matrix elements: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }

    cout << "Eigen vectors:" << endl;
    for (int i = 0; i < n; i++) {
        vector<double> v = power_iteration(A);
        cout << "Eigen vector " << i+1 << ": ";
        for (int j = 0; j < n; j++) {
            cout << v[j] << " ";
        }
        cout << endl;
        for (int j = 0; j < n; j++) {
            A[j][j] -= v[j] * v[j];
        }
    }

    return 0;
}

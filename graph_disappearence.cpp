#include <iostream>
#include <vector>

using namespace std;

bool areVectorsEqual(const vector<int>& vec1, const vector<int>& vec2) {
    if (vec1.size() != vec2.size()) {
        return false; 
    }

    for (size_t i = 0; i < vec1.size(); ++i) {
        if (vec1[i] != vec2[i]) {
            return false; 
        }
    }

    return true; 
}

int main() {
    vector<int> a = {1, 2, 3, 4};
    vector<int> b = {1, 2, 3, 4};
    vector<int> c = {1, 2, 3, 5};

    if (areVectorsEqual(a, b)) {
        cout << "Vectors a and b are equal." << endl;
    } else {
        cout << "Vectors a and b are not equal." << endl;
    }

    if (areVectorsEqual(a, c)) {
        cout << "Vectors a and c are equal." << endl;
    } else {
        cout << "Vectors a and c are not equal." << endl;
    }

    return 0;
}

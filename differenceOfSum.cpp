#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void differenceOfSum(int num1, int num2) {
        int sum = 0;
        vector<int> divisible;
        vector<int> notDivisible;
        for (int i = 1; i < (num1 + 1); ++i) {
            if (i % num2 == 0) {
                divisible.push_back(i);
            } else {
                notDivisible.push_back(i);
                sum += notDivisible[i];
            }
        }
        cout << "The numbers divisible by " << num2 << " are ";
        for (auto num: divisible) {
            cout << num << " ";
        }
        cout << endl;

        cout << "The numbers not divisible by " << num2 << " are";
        for (auto num: notDivisible) {
            cout << num << " ";
        }
        cout << endl;
        cout << "Sum: " << sum;
    }
};
int main() {
    Solution solution;
    int num1, num2;
    cout<<"Enter numbers";
    cin>>num1>>num2;
    solution.differenceOfSum(num1,num2);
    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution{
    public:
    vector <bool> kidsWithCandies(vector<int>& candies, int extraCandies){
        int max = *max_element(candies.begin(),candies.end());
        vector <bool> results;
        for(int candy : candies){
            if((candy+extraCandies)==max){
                results.push_back(true);
            }
            else{
                results.push_back(false);
            }
        }
        return results;
    }
};
int main(){
    vector<int> candies = {2,3,4,5,6};
    int extraCandies = 3;

    Solution solution;
    vector<bool> result = solution.kidsWithCandies(candies, extraCandies);
    for(bool canHaveCandies:result){
        cout<<(canHaveCandies ? "true": "false")<<" ";
    }
    cout<<endl;
    return 0;

}
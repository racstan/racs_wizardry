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
        }
        return results;
    }
};
int main(){

    return 0;

}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution{
    public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int empty = 0;
        for(int i=0;i<flowerbed.size();i=i+1){
            if(i<flowerbed.size()-2) {
                if (flowerbed[i] == 1) {
                    if (flowerbed[i + 2] == 0 &&flowerbed[i+1]==0) {
                        flowerbed[i+2]=1;
                        empty++;
                    }
                }
                else if(flowerbed[i]==0){
                    if(flowerbed[i+2]==0&&flowerbed[i+1]==0){
                        flowerbed[i+1]=1;
                        empty++;
                    }
                }
            }
        }
        if(empty>=n){
            return true;
        }
        else{
            return false;
        }
    }
};
int main(){
    vector <int> flowerbed = {1,0,0,0,0,1};
    int n = 2;
    Solution solution;
    bool result = solution.canPlaceFlowers(flowerbed,n);
    cout<<result<<endl;
    return 0;

}
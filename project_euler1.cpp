#include <iostream>
#include <vector>

using namespace std;

int main(){
    int t;
    int num;
    int sum =0;
    cin >> t;
    if(t>0 &&t<100000){
    for(int a0 = 0; a0 < t; a0++){
        sum=0;
        int n;
        cin >> n;
        if(n>0&&n<1000000000){
        for(int i=0;i<n;i++){
            if(i%3==0||i%5==0){
                sum+=i;
            }
        }
        cout<<sum;
        cout<<endl;
        }
    }
    }
    return 0;
}

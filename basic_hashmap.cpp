#include <stdio.h>
#include <unordered_map>
#include <iostream>

using namespace std;

int main()
{
    unordered_map<int,int> hashmap;
    hashmap[1]=15;
    hashmap[2]=20;
    hashmap[3]=30;
    for(auto el:hashmap){
        cout<<el.first<<" "<<el.second<<endl;
    }
    return 0;
}

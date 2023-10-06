#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    char ch;
    int a,b,c,d,e,f;
    int len = str.length();
    stringstream ss(str);
    
    if(len==3){
    ss>>a>>ch>>b>>ch>>c;
    vector <int> v = {a,b,c};
    return v;
    }
    else if(len==4){
        ss>>a>>ch>>b>>ch>>c>>ch>>d;
    vector <int> v = {a,b,c,d};
    return v;
    }
    else if(len==5){
        ss>>a>>ch>>b>>ch>>c>>ch>>d>>ch>>e;
    vector <int> v = {a,b,c,d,e};
    return v;
    }
    else if(len==6){
        ss>>a>>ch>>b>>ch>>c>>ch>>d>>ch>>e>>ch>>f;
    vector <int> v = {a,b,c,d,e,f};
    return v;
    }
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    return 0;
}           
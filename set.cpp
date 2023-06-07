#include <iostream>
#include <set>
using namespace std;

int main(){
    set <int> a;
    int n;
    cout<<"Enter the first element of the set"<<endl;
    cin>> n;
    a.insert(n);
    for(int i=0;!cin.fail();i++){
        cout<<"Press any alphabet to exit or "<<endl;
        cout<<"Enter the "<<i+2<<" Element of the set"<<endl;
        cin>>n;
        if(cin.fail()!=true){
        a.insert(n);
        cout<<"The elements so far in the set are: "<<endl;
        for(set <int>::iterator it = a.begin(); it != a.end();++it){
        cout<<*it<<" "<<endl;
        }
        }
        else{
            cout<<"Exiting..."<<endl;
            break;
        }
    }
            cout<<"The elements present in the set are "<<endl;

    for(set <int>::iterator it = a.begin(); it != a.end();++it){
        cout<<*it<<" ";
    }
    cout<<"Enter 1 if you want to remove elements from the set";
    cin>>n;
    while(n==1){
        cout<<"Enter which element to remove"<<endl;
        cin>>n;
        a.erase(n);
        cout<<"The removed element is "<<n<<endl;
        cout<<"The elements present in the set after removing "<<n<<" are"<<endl;
        for(set <int>::iterator it = a.begin(); it != a.end();++it){
        cout<<*it<<" ";
    }
    cout<<"Enter 1 if you want to remove elements from the set";
    cin>>n;
    }
    return 0;
}
#include <iostream>
#include <unordered_map>
using namespace std;
int main(){
    std::unordered_map<std::string, int> myMap;
    std::string myString;
    int tempNum;
    bool toContinue = true;
    string tempString;
    int tempChoice;
    for(int i=0; i<3;i++){
        std::cout<<"Enter the name of key "<<i<<std::endl;
        std::cin>>myString;
        cout<<"Enter the value of the key "<<i<<std::endl;
        cin>>tempNum;
        myMap[myString] = tempNum;
    }
    while(toContinue==true){
    cout<<"Enter '1' you want to access a key value from its name else enter '2' a key name from its value"<<endl;
    cin>>tempChoice;
    switch(tempChoice){
        case 1: 
        cout<<"Enter the value of the key name"<<endl;
        cin>>tempString;
        //cout<<"The value of the key is"<<myMap[tempString]<<endl;
        break;
        if(myMap[tempString]!=NULL){
            cout<<"The value of the key is"<<myMap[tempString]<<endl;
        }
        else{
            cout<<"The key value associated with the key name is not found"<<endl;
        }

        case 2:
        cout<<"Enter the value of the key"<<endl;
        cin>>tempNum;
        string targetKey="";
        for(auto it=myMap.begin(); it!=myMap.end(); ++it){
            if(it->second == tempNum){
                targetKey = it->first;
                break;
            }
        }
        if(targetKey!=""){
        cout<<"The keyname associated with the value is "<<targetKey<< endl;
        }
        else{
            cout<<"The key name associated with the given key value not found"<<endl;
        }
    }
    cout<<"Do you want to test again.Enter 1 for true and 0 for false"<<endl;
    cin>>toContinue;
    }
    return 0;
}
#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main(){
    int countFreq = 0;
    bool setResult =true;
     string orig;
     string someString;
     cout<<"Enter the first string: ";
     cin>>orig;
     cout<<"Enter a string to check the anagram condition"<<endl;
     cin>> someString;
     int frequency[26];
     int frequencyNew[26];
     memset(frequency,0,sizeof(frequency));
     memset(frequencyNew,0,sizeof(frequencyNew));

     for(char c: orig){ 
        if(isalpha(c)){
            ++frequency[tolower(c)-'a'];
        }
     }
     for(auto i = 0; i<26; i++){
        countFreq+= frequency[i];
     }
    

    for(char c: someString){
        if(isalpha(c)){
            ++frequencyNew[tolower(c)-'a'];
        }
    }

    for(int i=0; i<26;i++){
        if(frequency[i]!=frequencyNew[i]){
            setResult = false;
            break;
        }
    }
    if(setResult==true){
        cout<<"The original string: "<<orig<<" and the new string: "<<someString<<" are anagrams"<<endl;
    }
    else{
        cout<<"They are not anagrams"<<endl;
    }
    return 0;
 }

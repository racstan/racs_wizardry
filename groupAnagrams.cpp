#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
using namespace std;

void checkStringAnagram(){
    cout<<"Enter the size of the original and new array respectively"<<": ";
    int size;
    int sizeNewArr;
    cin>>size>>sizeNewArr;
    string* orig = new string[size];
    string* newArr = new string[sizeNewArr];
    int frequency[26];
    int frequencyNew[26];
    for(int i=0; i<size;i++){
        cout<<"Enter the string number: "<<i<<" in the original array: ";
        cin>>orig[i];
    }
    for(int i =0; i<sizeNewArr;i++){
        cout<<"Enter the string number: "<<i<<" in the new array: ";
        cin>>newArr[i];
    }

    for(int i =0;i<26;i++){
        memset(frequency,0,sizeof(frequency));
        for(char c: orig[i]){
            if(isalpha(c)){
                ++frequency[tolower(c)-'a'];
            }
        }
        for(int j=0; j<sizeNewArr;j++){
        memset(frequencyNew,0,sizeof(frequencyNew));
        for(char nc: newArr[j]){
            if(isalpha(nc)){
                ++frequencyNew[tolower(nc)-'a'];
            }
        }
        bool setResult = true;    
        for(int i=0;i<26;i++){
            if(frequency[i]!=frequencyNew[i]){
                setResult = false;
                break;
            }
        }
            if(setResult){
                cout<<"These strings are annagrams: "<<orig[i]<<" and "<<newArr[i]<<endl;
            }
        }
        delete[] orig;
        delete[] newArr;
        }
    }
   
    
    int main(){
        checkStringAnagram();
        return 0;
    }



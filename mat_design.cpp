#include <iostream>
using namespace std;
#define MAX 1000
int main(){
    int n, m;
    cin>>n>>m;
    int temp=1;
    //char arr[MAX][MAX];
    //if n=5 and m=15 
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            if(i<n/2){
                if(j<(m/2-temp)){
                    cout<<'-'; //------.|.------
                }
                else if(j==(m/2-temp)){
                    cout<<".|.";
                }
                else if(j>(m/2+temp+temp)){
                    cout<<"-";
                }
            }
        }
    }
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            if(i==(n/2+1)){
                if(j<(m/2-3)){
                    cout<<'-';
                }
                else if(j==(m/2-3)){
                    cout<<"WELCOME";
                }
                else if(j>(m/2+5)){
                    cout<<'-';
                }
            }
        }
    }
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            if(i>(n/2+1)){
                if(j<(m/2-temp)){
                    cout<<'-';
                }
                else if(j==(m/2-temp)){
                    cout<<".|.";
                }
                else if(j>(m/2+temp)){
                    cout<<endl;
                    cout<<"-";
                }
            }
        }
    }
        cout<<endl;
        temp = temp+6;
    }

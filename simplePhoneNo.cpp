#include <iostream>
using namespace std;
int main(){
    int cc;
    int no[9];
    int cnCodes[]= {91,1,44,86,52};
    string cnNames[] = {"India","United States", "UK","China","Mexico"};
    cout<<"select the country"<<endl;
    cout<<"1 for IN, 2 for US, 3 for UK, 4 for CN, 5 for MX"<<endl;
    cin>> cc;
    cout<<"Enter the phone number"<<endl;
    if(no[0]==0){
            cout<<"No cannot begin with 0"<<endl;
        }
        else{
    for(int i=0;i<10;i++){
    cin>>no[i];
        }
    switch(cc){
        case 1:
        cout<<"Entered number was"<<endl;
        cout<<cnNames[0]<<" : "<<cnCodes[0]<<" ";
        for(int i =0;i<10;i++){
            cout<<no[i];
        }
        case 2:
        cout<<"Entered number was"<<endl;
        cout<<cnNames[1]<<" : "<<cnCodes[1]<<" ";
        for(int i =0;i<10;i++){
            cout<<no[i];
            if(i%2==0&& i!=0){
                cout<<" ";
            }
        }
        case 3:
        cout<<"Entered number was"<<endl;
        cout<<cnNames[2]<<" : "<<cnCodes[2]<<" ";
        for(int i =0;i<10;i++){
            cout<<no[i];
        }case 4:
        cout<<"Entered number was"<<endl;
        cout<<cnNames[3]<<" : "<<cnCodes[3]<<" ";
        for(int i =0;i<10;i++){
            cout<<no[i];
        }case 5:
        cout<<"Entered number was"<<endl;
        cout<<cnNames[4]<<" : "<<cnCodes[4]<<" ";
        for(int i =0;i<10;i++){
            cout<<no[i];
        }
    }

    }
}   
    
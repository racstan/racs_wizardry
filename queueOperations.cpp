#include <iostream>
#include <queue>
using namespace std;

int main(){
    queue<int> myQueue;
    int n;
    int m;
    cout<<"Enter the first element of the queue"<<endl;
    cin>>n;
    myQueue.push(n);
    while(cin.fail()!=true){
        cout<<"Enter element"<<endl;
        cin>>n;
        myQueue.push(n);
        queue<int> myQueueCopy = myQueue;
        cout<<"Current elements of the queue are: "<<endl;
        for(int i=0; i<myQueue.size();i++){
            cout<<myQueueCopy.front()<<endl;
            myQueueCopy.pop();
        }
    }
    cout<<"Now press '1' if you want to pop the elements"<<endl;
    cin>>m;
    while(myQueue.empty()!=true && m==1){
        cout<<"The element which is popped is "<<myQueue.front()<<endl;
        myQueue.pop();
        cout<<"Now press 1 if you want to pop the elements"<<endl;
        cin>>m;
    }
    return 0;
}
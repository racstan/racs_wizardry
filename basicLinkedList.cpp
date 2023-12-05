#include <iostream>
#include <array>
using namespace std;

    struct Node {
        int data;
        Node* next;
    };   
int main(){
    Node* head = new Node;
    Node* second = new Node;
    Node* third = new Node;
    head->data =0;
    head->next = second;
    second->data =4;
    second->next =third;
    third->data =7;
    third->next= nullptr;
    
    Node* current = head;
    while(current!=nullptr){
        cout<<current->data<<endl;
        current = current->next;
    } 
    delete head;
    delete second;
    delete third;
    return 0;
}              
#include <iostream>
using namespace std;

    struct Node {
        int data;
        Node* next;
    };
    void insert(Node*&head,int value){
        //Node*&head means that head is a pointer to Node and the reference symbol indicates that it is a reference to the original value of head.
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = nullptr;
        if(head==nullptr){
            head = newNode;
        }
        else{
            Node* current = head;
            while(current->next!=nullptr){
                current= current->next;
            }
            current->next = newNode;
        }
    }
int main(){
    Node* head=nullptr;
    int n;
    cout<<"Enter 1 if you want to insert an element to the linked list"<<endl<<"or press any alphabet to exit"<<endl;
    cin>>n;
    while(cin.fail()!=true){
        cout<<"Enter the element to insert: ";
        cin>>n;
        insert(head,n);
        cout<<"Enter 1 if you want to insert an element to the linked list"<<endl<<"or press any alphabet to exit"<<endl;
        cin>>n;
    }
    Node* current = head;
    while(current!=nullptr){
        cout<< current->data<<endl;
        current= current->next;
    }

    while(head!=nullptr){
        Node* temp =head;
        head=head->next;
        delete temp;
    }
    return 0;
}
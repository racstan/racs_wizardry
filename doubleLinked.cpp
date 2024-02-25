#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* prev;
    Node* next;
    Node(int data){
        this->data = data;
        this->prev = nullptr;
        this->next= nullptr;
    }
};

class doubleLinkedList{
private:
    Node *head;
    Node *tail;
public:
    doubleLinkedList(){
        head = nullptr;
        tail = nullptr;
    }
    ~doubleLinkedList(){
        Node* current = head;
        while(current!= nullptr){
            Node* temp = current->next;
            delete current;
            current = temp;
        }
        head = nullptr;
        tail = nullptr;
    }

    void insertAtEnd(int data){
        Node* newNode = new Node(data);
        if(head== nullptr){
            head = tail= newNode;
        }
        else{
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    void printForward(){
        Node *current = head;
        while(current!= nullptr){
            cout<<current->data<<" ";
            current = current->next;
        }
    }

    void printBackward(){
        Node *current = tail;
        while(current!= nullptr){
            cout<<current->data<<" ";
            current = current->prev;
        }
    }
    Node* search(int data){
        Node* current = head;
        while(current!= nullptr){
            if(current->data==data){
                return current;
            }
            current = cuurent->next;
        }
        return nullptr;
    }
};
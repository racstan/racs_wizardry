#include <iostream>
using namespace std;
class Node {
public:
	int data;
	Node* next;
	Node(int data) {
		this->data = data;
		this->next = nullptr;
	}
};
class Queue {
public:
	Node* front;
	Node* rear;
	Queue() {
		front = nullptr;
		rear = nullptr;
	}
	void enqueue(int value) {
		Node* newNode = new Node(value);
		if (front == nullptr) {
			front = rear = newNode;
			return;
		}
		rear->next = newNode;
		rear = newNode;
	}
	void dequeue() {
		if (front == nullptr) {
			cout << "Queue is empty" << endl;
			return;
		}
		if (front == rear) {
			delete front;
			front = rear = nullptr;	
		}
		else {
			Node* temp = front;
			front = front->next;
			delete temp;
		}
	}
	void display() {
		if (front == nullptr) {
			cout << "Queue is empty" << endl;
			return;
		}

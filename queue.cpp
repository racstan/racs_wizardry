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

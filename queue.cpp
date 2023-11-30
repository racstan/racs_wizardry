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

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
class LinkedList {
private:
	Node* head;
public:
	LinkedList() {
		head = nullptr;
	}
	void insertAtBeginning(int value) {
		Node* newNode = new Node(value);
		if (head == nullptr) {
			head = newNode;
			return;
		}
		newNode->next = head;
		head = newNode;
	}
	void insertAtEnd(int value) {
		Node* newNode = new Node(value);
		Node* current = head;
		if (head == nullptr) {
			head = newNode;
			return;
		}
		while (current->next!= nullptr) {
			current = current->next;
		}
		current->next = newNode;
	}
	void deleteValue(int value) {
		Node* newNode = new Node(value);

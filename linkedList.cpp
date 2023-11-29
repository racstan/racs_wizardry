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
		if (head == nullptr) {
			cout << "No List created";
			return;
		}
		if (head->data == value) {
			Node* temp = head;
			head = head->next;
			delete temp;
			return;
		}
		Node* current = head;
		while (current->next != nullptr && current->next->data != value) {
			current = current->next;
		}
		if (current->next == nullptr) {
			cout << "Element not found" << endl;
			return;
		}
		Node* temp = current->next;
		current->next = current->next->next;
		delete temp;
	}
	void display() {
		Node* current = head;
		while (current->next != nullptr) {
			cout << current->data << " ";
			current = current->next;
		}
	}
	bool search(int value) {
		if (head == nullptr) {
			cout << "List not created" << endl;
			return false;
		}
		if (head->data == value) {
			return true;
}
		Node* current = head;
		while (current->next != nullptr && current->next->data != value) {
			current = current->next;
		}
		if (current->next == nullptr) {
			cout << "Element not found";
			return false;
		}
		if (current->next->data == value) {
			cout << "Element found";
			return true;
		}
	}
};
int main() {
	LinkedList myList;
	myList.insertAtBeginning(20);
	myList.insertAtBeginning(200);
	myList.insertAtBeginning(2000);
	myList.insertAtEnd(69);
	myList.display();
	return 0;
}


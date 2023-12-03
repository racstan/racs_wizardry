#include <iostream>
#include <queue>
using namespace std;
class Node {
public:
	int data;
	Node* left;
	Node* right;
	Node(int value): data(value), left(nullptr), right(nullptr){}
};
class BinaryTree {
private:
	Node* root;
public:
	BinaryTree(): root(nullptr){}
	void insert(int value) {
		root = insertRecursive(root, value);
	}
	Node* insertRecursive(Node* current, int value) {
		if (current == nullptr) {
			return new Node(value);
		}
		if (value < current->data) {
			current->left = insertRecursive(current->left, value);
		}
		return current;
	}
	void levelOrderTraversal() {
		if (root == nullptr) {
			cout << "Tree is empty" << endl;
			return;
		}
		queue<Node*> q;
		q.push(root);
		cout << "Level Order Traversal";
		while (!q.empty()) {
			Node* current = q.front();
			q.pop();
			cout << current->data << " ";
			if (current->left != nullptr) {

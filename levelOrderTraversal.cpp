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

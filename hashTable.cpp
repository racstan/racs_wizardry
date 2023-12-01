#include <iostream>
#include <vector>
using namespace std;
class Node {
public:
	int key;
	int value;
	Node* next;

	Node(int key, int value) {
		this->key = key;

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
		this->value = value;
		this->next = nullptr;
	}
};
class HashTable {
private:
	vector<Node*> buckets;
	int numBuckets;
	int hashFunction(int key) {
		return key % numBuckets;
	}
public:
	HashTable(int numBuckets) {

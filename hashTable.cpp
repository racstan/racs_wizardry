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
		this->numBuckets = numBuckets;
		this->buckets.resize(numBuckets, nullptr);
	}
	void insert(int key, int value) {
		int index = hashFunction(key);
		Node* newNode = new Node(key,value);
		if (buckets[index] == nullptr) {
			buckets[index] = newNode;
		}
		else {
			newNode->next = buckets[index];
			buckets[index] = newNode;
		}
	}


	int get(int key) {
		int index = hashFunction(key);
		Node* current = buckets[index];
		while (current != nullptr) {
			if (current->key == key) {
				return current->value;
			}
			current = current->next;
		}
		return -1;
	}
};
int main() {
            
		HashTable myHashTable(5);
		  	myHashTable.insert(5, 12);
 
 
                        
	  					 
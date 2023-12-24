#include <iostream>
#include <list>
using namespace std;
class Graph{
    int numVertices;
    list<int> *adjList;
    public:
    Graph(int numVertices){
        this->numVertices = numVertices;

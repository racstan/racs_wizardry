#include <iostream>
#include <list>
using namespace std;
class Graph{
    int numVertices;
    list<int> *adjList;
    public:
    Graph(int numVertices){
        this->numVertices = numVertices;
        adjList = new list<int>[numVertices];
    }
    void addEdge(int src, int des){
        adjList[src].push_back(des);
        if(isUndirected()){

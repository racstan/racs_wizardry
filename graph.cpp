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
            adjList[des].push_back(src);
        }
    }
    bool isUndirected(){
        return true;
    }
    void printGraph(){
        for(int i=0;i<numVertices; ++i){
            cout<<"Adjacency List of vertex "<<i;
            for(auto neighbor: adjList[i]){
                cout<<neighbor;
            }
            cout<<endl;
        }
    }
};

int main(){
    Graph myGraph(5);
    myGraph.addEdge(1,4);
    myGraph.addEdge(1,2);
    myGraph.printGraph();
}



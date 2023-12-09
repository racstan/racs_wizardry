#include <iostream>
#include <vector>
#include <limits.h>
#include <unordered_map>

using namespace std;

struct Edge {
    int src, dest, weight;
};
       
class Graph { 
    private: 
        int V; 
        int E; 
        vector<Edge> edges; 
        unordered_map<int, vector<int>> adj;

    public:
        Graph(int V, int E) {
            this->V = V;
            this->E = E;
        }

        void addEdge(int u, int v, int w) {
            edges.push_back({u, v, w});
            adj[u].push_back(v);
        }

        void bellmanFord(int src) {
            vector<int> dist(V, INT_MAX);
            dist[src] = 0;

            vector<int> pred(V, -1);

            for (int i = 0; i < V - 1; i++) {
                for (auto it = edges.begin(); it != edges.end(); it++) {
                    int u = it->src;
                    int v = it->dest;
                    int weight = it->weight;
                    if (dist[u] != INT_MAX && dist[u] + weight < dist[v]) {
                        dist[v] = dist[u] + weight;
                        pred[v] = u;
                    }
                }
            }

            for (auto it = edges.begin(); it != edges.end(); it++) {
                int u = it->src;
                int v = it->dest;
                int weight = it->weight;
                if (dist[u] != INT_MAX && dist[u] + weight < dist[v])
                    cout << "Graph contains negative-weight cycle" << endl;
            }

            cout << "Vertex\tDistance\tPredecessor" << endl;
            for (int i = 0; i < V; i++) {
                cout << i << "\t" << dist[i] << "\t\t";
                if (pred[i] == -1)
                    cout << "None";
                else
                    cout << pred[i];
                cout << endl;
            }
        }
};

int main() {
    int V = 5; 
    int E = 8; 
    Graph graph(V, E); 

    graph.addEdge(0, 1, -1);
    graph.addEdge(0, 2, 4);
    graph.addEdge(1, 2, 3);
    graph.addEdge(1, 3, 2);
    graph.addEdge(1, 4, 2);
    graph.addEdge(3, 2, 5);
    graph.addEdge(3, 1, 1);
    graph.addEdge(4, 3, -3);

    graph.bellmanFord(0);

    return 0;
}
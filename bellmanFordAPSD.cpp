#include <iostream>
#include <vector>
#include <limits.h>

using namespace std;

struct Edge {
    int src, dest, weight;
};

class Graph {
    private:
        int V;
        int E;
        vector<Edge> edges;

    public:
        Graph(int V, int E) {
            this->V = V;
            this->E = E;
        }

        void addEdge(int u, int v, int w) {
            edges.push_back({u, v, w});
        }

        void bellmanFord(int src, vector<vector<int>>& dist) {
            for (int i = 0; i < V; i++) {
                for (int j = 0; j < V; j++) {
                    dist[i][j] = INT_MAX;
                }
            }
            dist[src][src] = 0;

            for (int i = 0; i < V - 1; i++) {
                for (auto it = edges.begin(); it != edges.end(); it++) {
                    int u = it->src;
                    int v = it->dest;
                    int weight = it->weight;
                    if (dist[src][u] != INT_MAX && dist[src][u] + weight < dist[src][v]) {
                        dist[src][v] = dist[src][u] + weight;
                    }
                }
            }

            for (auto it = edges.begin(); it != edges.end(); it++) {
                int u = it->src;
                int v = it->dest;
                int weight = it->weight;
                if (dist[src][u] != INT_MAX && dist[src][u] + weight < dist[src][v])
                    cout << "Graph contains negative-weight cycle" << endl;
            }
        }
};

int main() {
    int V = 4;
    int E = 5;
    Graph graph(V, E);

    graph.addEdge(0, 1, 1);
    graph.addEdge(0, 2, 4);
    graph.addEdge(1, 2, 2);
    graph.addEdge(2, 3, 1);
    graph.addEdge(3, 1, -6);

    vector<vector<int>> dist(V, vector<int>(V));

    for (int i = 0; i < V; i++) {
        graph.bellmanFord(i, dist);
    }

    cout << "All-pairs shortest path distances:" << endl;
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            if (dist[i][j] == INT_MAX)
                cout << "INF ";
            else
                cout << dist[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

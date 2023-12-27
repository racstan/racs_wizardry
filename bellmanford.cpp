#include <iostream>
#include <vector>
#include <climits>

using namespace std;

struct Edge
{
    int source;
    int dest;
    int weight;
};

void FinalSolution(vector<int>& dist) 
{
    cout << "\nVertex\tDistance from Source Vertex\n";
    for (int i = 0; i < dist.size(); ++i)
    {
        cout << i << "\t\t" << dist[i] << "\n";
    }
}

void BellmanFord(vector<Edge>& edges, int V, int E, int source)
{
    vector<int> dist(V, INT_MAX);
    dist[source] = 0;

    for (int i = 1; i <= V - 1; i++)
    {
        for (int j = 0; j < E; j++)
        {
            int u = edges[j].source;
            int v = edges[j].dest;
            int weight = edges[j].weight;
            if (dist[u] != INT_MAX && dist[v] > dist[u] + weight)
            {
                dist[v] = dist[u] + weight;
            }
        }
    }

    for (int i = 0; i < E; i++)
    {
        int u = edges[i].source;
        int v = edges[i].dest;
        int weight = edges[i].weight;
        if (dist[u] != INT_MAX && dist[v] > dist[u] + weight)
        {
            cout << "Negative edge cycle found!\n";
            return;
        }
    }

    FinalSolution(dist);
}

int main()
{
    int V, E, S;
    cout << "Enter number of vertices in graph\n";
    cin >> V;
    cout << "Enter number of edges in graph\n";
    cin >> E;
    cout << "Enter your source vertex number\n";
    cin >> S;

    vector<Edge> edges(E);

    cout << "Enter edge properties Source, destination, weight respectively\n";
    for (int i = 0; i < E; i++)
    {
        cin >> edges[i].source >> edges[i].dest >> edges[i].weight;
    }

    BellmanFord(edges, V, E, S);

    return 0;
}
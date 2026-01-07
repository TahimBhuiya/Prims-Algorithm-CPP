#include <iostream>
#include <vector>
#include <queue>
#include <climits>  // For INT_MAX
using namespace std;

// Pair format: {weight, vertex}
typedef pair<int, int> pii;

// Prim's Algorithm function
void primMST(int V, vector<vector<pii>>& graph) {
    // Stores the minimum weight edge to connect each vertex to the MST
    vector<int> key(V, INT_MAX);

    // Stores the parent of each vertex in the MST
    vector<int> parent(V, -1);

    // Keeps track of vertices included in MST
    vector<bool> inMST(V, false);

    // Min-heap priority queue (weight, vertex)
    priority_queue<pii, vector<pii>, greater<pii>> pq;

    // Start from vertex 0
    key[0] = 0;
    pq.push({0, 0});

    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();

        // If vertex is already included in MST, skip
        if (inMST[u])
            continue;

        // Include vertex in MST
        inMST[u] = true;

        // Traverse all adjacent vertices
        for (auto edge : graph[u]) {
            int v = edge.first;      // Adjacent vertex
            int weight = edge.second; // Edge weight

            // If v not in MST and weight is smaller than current key
            if (!inMST[v] && weight < key[v]) {
                key[v] = weight;
                parent[v] = u;
                pq.push({key[v], v});
            }
        }
    }

    // Print the MST
    cout << "Edges in the Minimum Spanning Tree:\n";
    cout << "Edge \tWeight\n";
    for (int i = 1; i < V; i++) {
        cout << parent[i] << " - " << i << "\t" << key[i] << "\n";
    }
}

// Main function
int main() {
    int V = 5; // Number of vertices

    // Adjacency list: {neighbor, weight}
    vector<vector<pii>> graph(V);

    // Undirected graph edges
    graph[0].push_back({1, 2});
    graph[1].push_back({0, 2});

    graph[0].push_back({3, 6});
    graph[3].push_back({0, 6});

    graph[1].push_back({2, 3});
    graph[2].push_back({1, 3});



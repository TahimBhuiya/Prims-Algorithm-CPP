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
        

}
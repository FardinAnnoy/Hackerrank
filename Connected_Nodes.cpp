#include <bits/stdc++.h>
using namespace std;

// Function to add an edge in the graph
void addEdge(vector<vector<int>>& graph, int u, int v) {
    graph[u].push_back(v);
    graph[v].push_back(u);
}

// Function to find the connected nodes of a given node
void connectedNodes(vector<vector<int>>& graph, int node) {
    // Check if the node is valid
    if(node < 0 || node >= graph.size()) {
        cout << -1 << endl;
        return;
    }

    // Sort the adjacency list of the given node in descending order
    sort(graph[node].begin(), graph[node].end(), greater<int>());

    // Print the adjacency list
    for(int i: graph[node]) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    int N, E;
    cin >> N >> E;

    // Create a graph with N vertices
    vector<vector<int>> graph(N);

    for(int i = 0; i < E; i++) {
        int u, v;
        cin >> u >> v;
        addEdge(graph, u, v);
    }

    int Q;
    cin >> Q;

    while(Q--) {
        int node;
        cin >> node;
        connectedNodes(graph, node);
    }

    return 0;
}
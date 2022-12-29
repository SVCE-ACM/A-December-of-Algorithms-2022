#include <bits/stdc++.h>
#include <iostream>
#include <queue>
using namespace std;


const int N = 4;  // number of vertices in the graph

// 2D vector representation of the graph
int graph[N][N] = {
    {0, 1, 0, 1},
    {1, 0, 1, 0},
    {0, 1, 0, 1},
    {1, 0, 1, 0}
};
    // initialize the adjacency list
    std::vector<std::vector<int>> adj(N);
// function to check if the graph is bipartite
bool is_bipartite() {
    // sets to store the vertices of the graph
    std::vector<int> U, V;

    // initialize the sets with an arbitrary vertex
    U.push_back(0);

    // mark all vertices as unvisited
    bool visited[N] = {false};

    // iterate over the vertices in set U
    for (int u : U) {
        visited[u] = true;  // mark the vertex as visited
        // iterate over the neighbors of u
        for (int v : adj[u]) {
            // if the neighbor has not been visited, add it to set V
            if (!visited[v]) {
                V.push_back(v);
            }
            // if the neighbor has already been visited, check which set it belongs to
            else {
                // if the neighbor belongs to set U, the graph is not bipartite
                if (std::find(U.begin(), U.end(), v) != U.end()) {
                    return false;
                }
            }
        }
    }

    // repeat the process for the vertices in set V
    for (int v : V) {
        visited[v] = true;  // mark the vertex as visited
        // iterate over the neighbors of v
        for (int u : adj[v]) {
            // if the neighbor has not been visited, add it to set U
            if (!visited[u]) {
                U.push_back(u);
            }
            // if the neighbor has already been visited, check which set it belongs to
            else {
                // if the neighbor belongs to set V, the graph is not bipartite
                if (std::find(V.begin(), V.end(), u) != V.end()) {
                    return false;
                }
            }
        }
    }

    // if no neighbors belonging to the same set as the current vertex were found, the graph is bipartite
    return true;
}
int main() {


    // iterate over the rows and columns of the 2D vector
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            // if the element is equal to 1, add the column index as a neighbor of the row index
            if (graph[i][j] == 1) {
                adj[i].push_back(j);
            }
        }
    }

    if (is_bipartite()) {
        std::cout << "The graph is bipartite." << std::endl;
    }
    else {
        std::cout << "The graph is not bipartite." << std::endl;
    }

    return 0;
}

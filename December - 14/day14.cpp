#include <bits/stdc++.h>
#include <iostream>
#include <queue>
using namespace std;

const int N = 6;
int graph[N][N] = {
    {0, 1, 0, 0, 0, 1},
    {1, 0, 1, 0, 0, 0},
    {0, 1, 0, 1, 0, 0},
    {0, 0, 1, 0, 1, 0},
    {0, 0, 0, 1, 0, 1},
    {1, 0, 0, 0, 1, 0}};
std::vector<std::vector<int>> adj(N);
bool is_bipartite()
{
    std::vector<int> U, V;
    U.push_back(0);

    bool visited[N] = {false};

    for (int u : U)
    {
        visited[u] = true;
        for (int v : adj[u])
        {
            if (!visited[v])
            {
                V.push_back(v);
            }
            else
            {
                if (std::find(U.begin(), U.end(), v) != U.end())
                {
                    return false;
                }
            }
        }
    }

    for (int v : V)
    {
        visited[v] = true;
        for (int u : adj[v])
        {
            if (!visited[u])
            {
                U.push_back(u);
            }
            else
            {
                if (std::find(V.begin(), V.end(), u) != V.end())
                {
                    return false;
                }
            }
        }
    }
    return true;
}
int main()
{

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (graph[i][j] == 1)
            {
                adj[i].push_back(j);
            }
        }
    }

    if (is_bipartite())
    {
        std::cout << "The graph is Bipartite!" << std::endl;
    }
    else
    {
        std::cout << "The graph is not Bipartite!" << std::endl;
    }

    return 0;
}

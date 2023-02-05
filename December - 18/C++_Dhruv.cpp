#include <iostream>
#include <vector>
#include <queue>
#include <limits>
using namespace std;
const int N = 8;  // number of cities

// adjacency list representation of the graph
std::vector<std::pair<int, int>> graph[N] = {
    {{1, 5}, {3, 2}},  // city P has neighbors Q (5 hours) and S (2 hours)
    {{0, 5}, {2, 3}, {3, 1}},  // city Q has neighbors P (5 hours), R (3 hours), and S (1 hour)
    {{1, 3}, {4, 1}, {5, 5}},  // city R has neighbors Q (3 hours), T (1 hour), and V (5 hours)
    {{0, 2}, {1, 1}, {4, 1}},  // city S has neighbors P (2 hours), Q (1 hour), and T (1 hour)
    {{3, 1}, {2, 1}, {5, 1}, {6, 2}, {7, 1}},  // city T has neighbors S (1 hour), R (1 hour), V (1 hour), U (2 hours), and W (1 hour)
    {{2, 5}, {4, 1}, {7, 2}},  // city V has neighbors R (5 hours), T (1 hour), and W (2 hours)
    {{4, 2}, {7, 3}},  // city U has neighbors T (2 hours) and W (3 hours)
    {{4, 1}, {5, 2}, {6, 3}}  // city W has neighbors T (1 hour), V (2 hours), and U (3 hours)
};

// function to find the shortest time to travel by train from a given city to city W
int find_shortest_time(int city) {
    // initialize the distances to infinity
    std::vector<int> distances(N, std::numeric_limits<int>::max());

    // initialize the queue and visited array
    std::queue<int> q;
    std::vector<bool> visited(N);

    // set the distance of the starting city to 0 and mark it as visited
    distances[city] = 0;
    visited[city] = true;
    q.push(city);

    // perform BFS
    while (!q.empty()) {
        int u = q.front();
        q.pop();

        // visit the neighbors of u
        for (auto [v, w] : graph[u]) {
            // if v has not been visited and the distance to v is shorter through u, update the distance
            if (!visited[v] && distances[u] + w < distances[v]) {
                distances[v] = distances[u] + w;
                visited[v] = true;
                q.push(v);
            }
        }
    }

    // return the distance to city W
    return distances[7];
}

int main() {
    // choose a city
    int city;
    cin >> city;
    // find the shortest time to travel from the chosen city to city W
int shortest_time = find_shortest_time(city);

// print the result
if (shortest_time == std::numeric_limits<int>::max()) {
    std::cout << "There is no route from city " << city << " to city W." << std::endl;
} else {
    std::cout << "The shortest time to travel from city " << city << " to city W is " << shortest_time << " hours." << std::endl;
}

return 0;
}
    

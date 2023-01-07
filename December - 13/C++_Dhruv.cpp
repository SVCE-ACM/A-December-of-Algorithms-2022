#include <bits/stdc++.h>
#include <iostream>
#include <queue>
using namespace std;

const int N = 4;  // size of the maze

int maze[N][N] = {  // the maze, with 1s representing clear paths and 0s representing dead ends
    {1,0,0,0},
{1,1,0,1},
{0,1,0,0},
{1,1,1,1}

};

// structure to store the coordinates of a block in the maze
struct Point {
    int x, y;
};

// function to check if a given point is within the bounds of the maze
bool is_valid(int x, int y) {
    return x >= 0 && x < N && y >= 0 && y < N;
}

// function to find a solution to the maze using BFS
std::vector<Point> solve_maze_bfs(Point start, Point end) {
    std::vector<Point> path;  // vector to store the solution path

    std::queue<Point> q;  // queue to store the blocks that need to be explored
    q.push(start);

    // two-dimensional array to store the "came from" information for each block
    // came_from[i][j] stores the coordinates of the block that was explored just before the block at (i, j)
    Point came_from[N][N];
    came_from[start.x][start.y] = start;  // the starting block was explored just before itself

    // array to store the visited status of each block
    bool visited[N][N] = {false};  // all blocks are initially unvisited

    // explore the maze one block at a time
    while (!q.empty()) {
        Point p = q.front();
        q.pop();

        // check if the block is the endpoint
        if (p.x == end.x && p.y == end.y) {
            // construct the solution path by following the "came from" information back from the endpoint
            while (p.x != start.x || p.y != start.y) {
                path.push_back(p);
                p = came_from[p.x][p.y];
            }
            path.push_back(start);  // add the starting block to the path
            std::reverse(path.begin(), path.end());  // reverse the path
                        return path;  // return the solution path
        }

        // if the block is not the endpoint, add its neighbors to the queue
        if (is_valid(p.x + 1, p.y) && !visited[p.x + 1][p.y] && maze[p.x + 1][p.y] == 1) {
            q.push({p.x + 1, p.y});
            came_from[p.x + 1][p.y] = p;
            visited[p.x + 1][p.y] = true;
        }
        if (is_valid(p.x - 1, p.y) && !visited[p.x - 1][p.y] && maze[p.x - 1][p.y] == 1) {
            q.push({p.x - 1, p.y});
            came_from[p.x - 1][p.y] = p;
            visited[p.x - 1][p.y] = true;
        }
        if (is_valid(p.x, p.y + 1) && !visited[p.x][p.y + 1] && maze[p.x][p.y + 1] == 1) {
            q.push({p.x, p.y + 1});
            came_from[p.x][p.y + 1] = p;
            visited[p.x][p.y + 1] = true;
        }
        if (is_valid(p.x, p.y - 1) && !visited[p.x][p.y - 1] && maze[p.x][p.y - 1] == 1) {
            q.push({p.x, p.y - 1});
            came_from[p.x][p.y - 1] = p;
            visited[p.x][p.y - 1] = true;
        }
    }

    return {};  // no solution was found
}

int main() {
    int n=4;
    vector<vector<int> > res(n, vector<int>(n,0));
    // define the starting and ending points of the maze
    Point start = {0, 0};
    Point end = {N - 1, N - 1};

    // find a solution to the maze using BFS
    std::vector<Point> path = solve_maze_bfs(start, end);

    if (path.empty()) {
        std::cout << "No solution found." << std::endl;
    } else {
        // std::cout << "Solution found: " << std::endl;
        for (Point p : path) {
            res[p.x][p.y]=1;
        //     std::cout << "(" << p.x << ", " << p.y << ")" << std::endl;
        }
        for(int i=0;i<4;i++)
        {
            for(int j=0;j<4;j++)
            {
                
                std::cout<<res[i][j];
            }
           std::cout<< std::endl;
        }
    }

    return 0;
}

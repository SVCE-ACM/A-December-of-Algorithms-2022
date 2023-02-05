#include <bits/stdc++.h>
#include <iostream>
#include <queue>
using namespace std;

const int N = 4;

int maze[N][N] = {
    {1, 0, 0, 0},
    {1, 1, 0, 1},
    {0, 1, 0, 0},
    {1, 1, 1, 1}

};

struct Point
{
    int x, y;
};

bool is_valid(int x, int y)
{
    return x >= 0 && x < N && y >= 0 && y < N;
}

std::vector<Point> solve_maze_bfs(Point start, Point end)
{
    std::vector<Point> path;

    std::queue<Point> q;
    q.push(start);

    Point came_from[N][N];
    came_from[start.x][start.y] = start;

    bool visited[N][N] = {false};

    while (!q.empty())
    {
        Point p = q.front();
        q.pop();

        if (p.x == end.x && p.y == end.y)
        {
            while (p.x != start.x || p.y != start.y)
            {
                path.push_back(p);
                p = came_from[p.x][p.y];
            }
            path.push_back(start);
            std::reverse(path.begin(), path.end());
            return path;
        }

        if (is_valid(p.x + 1, p.y) && !visited[p.x + 1][p.y] && maze[p.x + 1][p.y] == 1)
        {
            q.push({p.x + 1, p.y});
            came_from[p.x + 1][p.y] = p;
            visited[p.x + 1][p.y] = true;
        }
        if (is_valid(p.x - 1, p.y) && !visited[p.x - 1][p.y] && maze[p.x - 1][p.y] == 1)
        {
            q.push({p.x - 1, p.y});
            came_from[p.x - 1][p.y] = p;
            visited[p.x - 1][p.y] = true;
        }
        if (is_valid(p.x, p.y + 1) && !visited[p.x][p.y + 1] && maze[p.x][p.y + 1] == 1)
        {
            q.push({p.x, p.y + 1});
            came_from[p.x][p.y + 1] = p;
            visited[p.x][p.y + 1] = true;
        }
        if (is_valid(p.x, p.y - 1) && !visited[p.x][p.y - 1] && maze[p.x][p.y - 1] == 1)
        {
            q.push({p.x, p.y - 1});
            came_from[p.x][p.y - 1] = p;
            visited[p.x][p.y - 1] = true;
        }
    }

    return {};
}

int main()
{
    int n = 4;
    vector<vector<int>> res(n, vector<int>(n, 0));
    Point start = {0, 0};
    Point end = {N - 1, N - 1};

    std::vector<Point> path = solve_maze_bfs(start, end);

    if (path.empty())
    {
        std::cout << "No solution found." << std::endl;
    }
    else
    {
        for (Point p : path)
        {
            res[p.x][p.y] = 1;
        }
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {

                std::cout << res[i][j];
            }
            std::cout << std::endl;
        }
    }

    return 0;
}

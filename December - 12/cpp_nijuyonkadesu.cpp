#include <iostream>
#include <vector>
#include <climits>
#include <numeric>

using namespace std;

vector<vector<int>> input(int);
void pathFinder(vector<vector<bool>>& visited, vector<vector<int>> &maze, vector<int>& path, vector<vector<int>> &possibility, int x, int y, int n); 
bool isSafe(vector<vector<bool>>& visited, int x, int y, int n);

int main() {
    int n;
    cin>>n;

    vector<vector<bool>> visited(n, vector<bool> (n, 0));
    vector<vector<int>> maze = input(n);
    vector<int> path;
    vector<vector<int>> possibility;

    int min = INT_MAX;
    int pathPointer = 0, index =0;

    pathFinder(visited, maze, path, possibility, 0, 0, n);
    for(auto ans: possibility){
        index++;
        int sum = accumulate(ans.begin(), ans.end(), 0);
       if(sum < min){
           pathPointer = index;
           min = sum;
       }
    }

    for(auto i: possibility[pathPointer])
        cout<<i<<" ";
    
}

vector<vector<int>> input(int n) {
    vector<vector<int>> maze(n, vector<int> (n, 0));

    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            cin>>maze[i][j];
    return maze;
}

void pathFinder(vector<vector<bool>> &visited, vector<vector<int>> &maze, vector<int> &path, vector<vector<int>> &possibility, int x, int y, int n) {
    if(x==n-1 && y==n-1){
        path.push_back(maze[x][y]);
        possibility.push_back(path);
        path.pop_back();
        return ;
    }

    visited[x][y] = 1; // Mark visited
    path.push_back(maze[x][y]);

    if(isSafe(visited, x+1, y, n)) // Right
        pathFinder(visited, maze, path, possibility, x+1, y, n);
    if(isSafe(visited, x, y+1, n)) // Bottom
        pathFinder(visited, maze, path, possibility, x, y+1, n);
    if(isSafe(visited, x-1, y, n)) // Left
        pathFinder(visited, maze, path, possibility, x-1, y, n);
    if(isSafe(visited, x, y+1, n)) // Up
        pathFinder(visited, maze, path, possibility, x, y+1, n);

    visited[x][y] = 0; // Backtracking
    path.pop_back();
    return ;
}


bool isSafe(vector<vector<bool>>& visited, int x, int y, int n){
    return (x>=0 && x<n && y>=0 && y<n && !visited[x][y]);
}

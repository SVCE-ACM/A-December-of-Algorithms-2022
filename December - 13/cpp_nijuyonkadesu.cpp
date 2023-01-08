#include <iostream>
#include <vector>
#include <climits>
#include <numeric>

using namespace std;

vector<vector<int>> input(int);
void pathFinder(vector<vector<bool>>&, vector<vector<int>>&, vector<vector<bool>>&, int, int, int); 
bool isSafe(vector<vector<int>>&, int, int, int);

int main() {
    int n;
    cin>>n;

    vector<vector<bool>> visited(n, vector<bool> (n, 0)); // To keep track of visited boxes
    vector<vector<int>> maze = input(n); // The maze itself
    vector<vector<bool>> path; // Stores the final path

    int min = INT_MAX;
    int pathPointer = 0, index =0;

    pathFinder(visited, maze, path, 0, 0, n);
    cout<<"\n";
    
    for(auto i: path){
        for(auto j = i.begin(); j!=i.end(); j++){
            cout<<*j<<" ";
        }
        cout<<"\n";
    }
}

vector<vector<int>> input(int n) {
    vector<vector<int>> maze(n, vector<int> (n, 0));

    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            cin>>maze[i][j];
    return maze;
}

void pathFinder(vector<vector<bool>> &visited, vector<vector<int>> &maze, vector<vector<bool>> &path, int x, int y, int n) {
    if(x==n-1 && y==n-1){
        visited[x][y] = 1;
        path = visited;    // cannot use visited, on backtrack eventually, everything goes to 0. 
        visited[x][y] = 0; // Therefore take a snapshot and load it to a new variable for later access in main function
        return ;
    }

    visited[x][y] = 1; // Mark visited

    if(isSafe(maze, x+1, y, n)) // Right
        pathFinder(visited, maze, path, x+1, y, n);
    if(isSafe(maze, x, y+1, n)) // Bottom
        pathFinder(visited, maze, path, x, y+1, n);

    visited[x][y] = 0; // Backtracking
    return ;
}

bool isSafe(vector<vector<int>>& maze, int x, int y, int n){
    return (x<n && y<n && maze[x][y]); // check if 1, only then can move to the block
}

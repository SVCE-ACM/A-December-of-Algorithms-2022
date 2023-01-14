#include <bits/stdc++.h>
using namespace std;

 
bool solveMazeUtil(int maze[100][100], int x, int y,int sol[100][100],int n);
 
void printSolution(int sol[100][100],int n)
{
    cout<<endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
        {
            if(j!=n-1)
            cout<<sol[i][j]<<" ";
            else
            cout<<sol[i][j];
        }
        cout<<endl;
    }
}
 
bool isSafe(int maze[100][100], int x, int y,int n)
{
    if (x >= 0 && x < n && y >= 0 && y < n && maze[x][y] == 1)
        return true;
    return false;
}
 

bool solveMaze(int maze[100][100],int n)
{
    int sol[100][100];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            sol[i][j]=0;
        }
    }
    if (solveMazeUtil(maze, 0, 0, sol,n) == false) {
        return false;
    }
    printSolution(sol,n);
    return true;
}
 
bool solveMazeUtil(int maze[100][100], int x, int y, int sol[100][100],int n)
{
    if (x == n - 1 && y == n - 1 && maze[x][y] == 1) {
        sol[x][y] = 1;
        return true;
    }
    if (isSafe(maze, x, y,n) == true) {
        if (sol[x][y] == 1)
            return false;
        sol[x][y] = 1;
        if (solveMazeUtil(maze, x + 1, y, sol,n) == true)
            return true;
        if (solveMazeUtil(maze, x, y + 1, sol,n) == true)
            return true;
        sol[x][y] = 0;
        return false;
    }
    return false;
}
 
int main()
{
    int n;
    cin>>n;
    int maze[100][100];
    for(int i=0;i<n;i++)
    {
       for(int j=0;j<n;j++)
       {
           cin>>maze[i][j];
       }
    }
    solveMaze(maze,n);
    return 0;
}


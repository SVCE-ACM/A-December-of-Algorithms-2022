#include <bits/stdc++.h>
using namespace std;

bool issafe(int** arr, int x, int y, int n){
    if(x<n && y<n && arr[x][y]==1){
        return true;
    }
    return false;
}
bool inMaze(int** arr, int x, int y, int n, int** solArr){
    if(x==n-1 && y==n-1){
        solArr[x][y]=1;
        return true;
    }
    if(issafe(arr, x, y, n)){
        solArr[x][y]=1;
        if(inMaze(arr, x+1, y, n, solArr)){
            return true;
        }
        if(inMaze(arr, x, y+1, n, solArr)){
            return true;
        }
        solArr[x][y]=0;
        return false;
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    int** arr=new int*[n];
    for(int i=0; i<n; i++){
        arr[i]=new int[n];
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    int** solArr=new int*[n];
    for(int i=0; i<n; i++){
        solArr[i] = new int[n];
        for(int j=0; j<n; j++){
            solArr[i][j]=0;
        }
    }
    if((arr, 0, 0, n, solArr)){
        for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<solArr[i][j] << " ";
        }cout<<endl;

        }
    }
    return 0;
}
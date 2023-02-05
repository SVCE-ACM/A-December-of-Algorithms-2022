#include <bits/stdc++.h>
using namespace std;

bool isBipartite(int n, vector<vector<int>> &arr){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[i][j] != arr[n-1-i][n-1-j]) return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    int temp;
    vector<vector<int>> arr;
    for(int i=0; i<n; i++){
        vector<int> row;
        for(int j=0; j<n; j++){
            cin>>temp;
            row.push_back(temp);
        }
        arr.push_back(row);
    }
    if(isBipartite(n, arr)) cout << "The graph is Bipartite!";
    else cout << "The graph is not a Bipartite!";
    return 0;
}
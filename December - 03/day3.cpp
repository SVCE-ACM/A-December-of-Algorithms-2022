#include <bits/stdc++.h>
using namespace std;

int main() {
    
    vector<vector<char>>v{{'-', '#', '-', '-', '#'},{'-', '-', '-', '-', '-'}, {'-', '-', '#', '-', '-'},{'-', '#', '-', '-', '#'},{'-', '#', '-', '-', '#'}};
    int n = v.size();
    int m = v[0].size();
    vector<vector<int>>arr(n,vector<int> (m, 0));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            
            if(v[i][j]!='-'){
                arr[i][j]=-1;
                
                if(i-1>=0 and arr[i-1][j]!=-1)
                arr[i-1][j]++;
                if(i+1<n and arr[i+1][j]!=-1)
                arr[i+1][j]++;
                if(j-1>=0 and arr[i][j-1]!=-1)
                arr[i][j-1]++;
                if(j+1<m and arr[i][j+1]!=-1)
                arr[i][j+1]++;
                
                if(i-1>=0 and j-1>=0 and arr[i-1][j-1]!=-1)
                arr[i-1][j-1]++;
                if(i-1>=0 and j+1<m and arr[i-1][j+1]!=-1)
                arr[i-1][j+1]++;
               
                if(i+1<n and j+1<m and arr[i+1][j+1]!=-1)
                arr[i+1][j+1]++;
                if(i+1<n and j-1>=0 and arr[i+1][j-1]!=-1)
                arr[i+1][j-1]++;
                
                
            }
            
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==-1)
            cout<<'#'<<" ";
            else
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    
}

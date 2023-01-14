#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    int minimumCostPath(vector<vector<int>>& grid){

        int n=grid.size();
        int m=grid[0].size();
        int ans=0;
        int dist[n][m];
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                dist[i][j]=INT_MAX;
            }
        }
priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>>pq;
     dist[0][0]=grid[0][0];
     pq.push({dist[0][0], {0, 0}});
     int dx[4]={0, 0, -1, 1};
     int dy[4]={-1, 1, 0, 0};
     while(pq.empty()==false){
         auto x=pq.top(); pq.pop();
         int cost=x.first;
         auto y=x.second;
         int i=y.first;
         int j=y.second;
         ans+=cost;
         if(i==n-1  && j==m-1){
             break;
         }
         for(int k=0; k<4; k++){
             int u=i+dx[k];
             int v=j+dy[k];
             if(u>=0 && u<n && v>=0 &&  v<m  ){
                 if(dist[u][v]>=dist[i][j]+ grid[u][v]){
                     dist[u][v]=dist[i][j]+grid[u][v];
                     pq.push({dist[u][v], {u, v}});
                 }
             }
         }
     }
     return dist[n-1][m-1];
    }
};

int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>grid(n, vector<int>(n, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.minimumCostPath(grid);
		cout << ans << "\n";
	}
	return 0;
}
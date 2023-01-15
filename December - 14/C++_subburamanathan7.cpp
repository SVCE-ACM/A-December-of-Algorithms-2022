#include<iostream>
#include<queue>
using namespace std;
bool Bipartite(int G[][6],int root){
	int colorArr[6],i;
	for(i=0;i<6;i++)
		colorArr[i]=-1;

	colorArr[root] = 1; 
	
	//1-Red 0-Blue
	//colors to represent Bipartite
	queue<int> q;
	q.push(root);

	while(!q.empty()){
		int x = q.front();
		q.pop();

		if(G[x][x])
			return false;
		for(i=0;i<6;i++){
			if(G[x][i] && colorArr[i]==-1){
				colorArr[i]=1 - colorArr[x];
				q.push(x);
			}
			else if(G[x][i] && colorArr[x] == colorArr[i])
				return false;
		}
	}
	return true;
}
int main(){
	int root=1;
	int G[][6] = {
				  {0,1,0,0,0,1},
				  {1,0,1,0,0,0}, 
				  {0,1,0,1,0,0},
				  {0,0,1,0,1,0},
				  {0,0,0,1,0,1},
				  {1,0,0,0,1,0},
	};
	if(Bipartite(G,root))
		cout<<"Bipartite";
	else
		cout<<"Not Bipartite";
	return 0;
}

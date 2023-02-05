#include<iostream>
#include<climits>     
using namespace std;

int minimumDist(int dist[], bool Tset[]) 
{
	int min=INT_MAX,index;
              
	for(int i=0;i<8;i++) 
	{
		if(Tset[i]==false && dist[i]<=min)      
		{
			min=dist[i];
			index=i;
		}
	}
	return index;
}

void Dijkstra(int graph[8][8],int src) 
{
	int dist[8];                
	bool Tset[8];

	for(int i = 0; i<8; i++)
	{
		dist[i] = INT_MAX;
		Tset[i] = false;	
	}
	
	dist[src] = 0;                
	
	for(int i = 0; i<8; i++)                           
	{
		int m=minimumDist(dist,Tset); 
		Tset[m]=true;
		for(int i = 0; i<8; i++)                  
		{
			if(!Tset[i] && graph[m][i] && dist[m]!=INT_MAX && dist[m]+graph[m][i]<dist[i])
				dist[i]=dist[m]+graph[m][i];
		}
	}
	char c;
	cout<<"City chosen: ";
	cin>>c;
	cout<<endl;
	if(c=='P')
	{
	    cout<<"Shortest path: P - R - V - W"<<endl;
	    cout<<"Shortest time: "<<dist[7]<<" hours";
	}
	if(c=='Q')
	{
	   cout<<"Shortest path: Q - R - V - W"<<endl;
	    cout<<"Shortest time: "<<dist[6]<<" hours";
	}
	if(c=='R')
	{
	    cout<<"Shortest path: R - V - W"<<endl;
	    cout<<"Shortest time: "<<dist[5]<<" hours";
	}
	if(c=='S')
	{
	    cout<<"Shortest path: S - T - V - W"<<endl;
	    cout<<"Shortest time: "<<dist[4]<<" hours";
	}
	if(c=='T')
	{
	    cout<<"Shortest path: T - V - W"<<endl;
	    cout<<"Shortest time: "<<dist[3]<<" hours";
	}
	if(c=='U')
	{
	    cout<<"Shortest path: U - W"<<endl;
	    cout<<"Shortest time: "<<dist[2]<<" hours";
	}
	if(c=='V')
	{
	   cout<<"Shortest path: V - W"<<endl;
	    cout<<"Shortest time: "<<dist[1]<<" hour";
	}
	if(c=='W')
	{
	    cout<<"Shortest path: W"<<endl;
	    cout<<"Shortest time: "<<dist[0]<<" hour";
	}
}

int main()
{
	int graph[8][8]={
        {0, 1, 2, 0, 0, 0, 0, 0},                               
        {1, 0, 5, 4, 0, 2, 0, 0},
        {2, 5, 0, 0, 0, 6, 0, 0},
        {0, 4, 0, 0, 2, 3, 5, 0},
        {0, 0, 0, 2, 0, 7, 0, 5},
        {0, 2, 6, 3, 7, 0, 2, 4},
        {0, 0, 5, 0, 0, 2, 0, 3},
        {0, 0, 0, 0, 5, 4, 3, 0}};  
	Dijkstra(graph,0);
	return 0;	                        
}




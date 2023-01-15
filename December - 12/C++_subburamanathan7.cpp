#include <iostream>

using namespace std;
 
int main(){
	int maze[4][4]={
		{9,4,9,9},
		{6,7,6,4},
		{8,3,3,7},
		{7,4,9,10}
	};
	
//	here 4 remains to be the matrix dimensions everywhere
	int prev=0, cost=0;
	for(int i=0;i<4;++i){
		for(int j=0;j<4;++j){

			j=prev;
			if(i!=(4-1) || j!=(4-1)){
				cout<<maze[i][j]<<"-";
				cost+=maze[i][j];

				if(i+1<4 && j+1<4){
					if(maze[i][j+1]>maze[i+1][j]){
						prev=j;
						break;
					}
					else{
						prev=j+1;
						continue;
					}
				}
				else if(i+1<4 && j+1==4){
					prev=j;
					break;
				}
				else{
					prev=j+1;
					continue;
				}
			}
			else{
				
				cost+=maze[i][j];
				cout<<maze[i][j]<<endl<<"The Cost is "<<cost;
			}
		}

	}
	return 0;
}
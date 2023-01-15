#include<iostream>

using namespace std;

int main(){
	char mines[5][5] ={
		{'-','-','-','-','-'},
		{'-','-','-','-','-'},
		{'-','-','#','-','-'},
		{'-','-','-','-','-'},
		{'-','-','-','-','-'},
	};
	int maps[5][5];
	for (int i = 0; i < 5; ++i){
		for (int j = 0; j <5; ++j){
			if(mines[i][j]=='#')
				maps[i][j]= -1;
			else{
				maps[i][j]=0;
				if(j+1<5 || i+1<5 || j-1>=0 || i-1>=0){
					if(j+1<5)
						if(mines[i][j+1]=='#')
							maps[i][j]+=1;
					if(i+1<5)
						if(mines[i+1][j]=='#')
							maps[i][j]+=1;
					if(j-1>=0)
						if(mines[i][j-1]=='#')
							maps[i][j]+=1;
					if(i-1>=0)
						if(mines[i-1][j]=='#')
							maps[i][j]+=1;

					if(j+1<5 && i+1<5)
						if(mines[i+1][j+1]=='#')
							maps[i][j]+=1;

					if(j-1>=0 && i-1>=0)
						if(mines[i-1][j-1]=='#')
							maps[i][j]+=1;

					if(j+1<5 && i-1>=0)
						if(mines[i-1][j+1]=='#')
							maps[i][j]+=1;

					if(j-1>=0 && i+1<5)
						if(mines[i+1][j-1]=='#')
							maps[i][j]+=1;
				}
			}			
		}
	}

	for (int i = 0; i < 5; ++i){
		for (int j = 0; j < 5; ++j){
			printf("%3d",maps[i][j]);
		}
		printf("\n");
	}
	printf("\n-1 represents the mines");



	return 0;
}
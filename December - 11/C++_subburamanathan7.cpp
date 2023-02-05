#include<iostream>
using namespace std;

int main(){
	int limit,i,j=0,score;
	string sequence;		//Land or Water

	cout<<"Enter the sequence";
	cin>>sequence;

	cout<<"Enter Limit Of Jumps";
	cin>>limit;
	int *jumps = (int*)malloc(sizeof(int)*limit);

	cout<<"jumps can be 2 or 1\n";
	for(i=0;i<limit;i++)
		cin>>*(jumps+i);

	for(i=0;i<limit;i++){
		if(sequence[j]=='~') // To handle if monkey starts with water
			break;
		else
			score++;
		j=j+ *(jumps+i);
	}
	score--;
	cout<<score;
	return 0;
}



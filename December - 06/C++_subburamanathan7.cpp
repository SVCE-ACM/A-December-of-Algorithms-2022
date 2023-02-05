#include<iostream>

using namespace std;


int main(){
	int limit,i,position,person=0;
	cout<<"Enter Limit";
	cin>>limit;
	cout<<"Enter position";
	cin>>position;
	if(position>=limit)
		exit(1);
	int *arr =(int*)malloc(sizeof(int)*limit);
	for(i=0;i<limit;i++)
		cin>>arr[i];
	while(arr[0]!=0){
		person=!person;
		arr[0]=arr[0]-1;

		arr[0]+=arr[position];
		arr[position]=arr[0]-arr[position];
		arr[0]=arr[0]-arr[position];
	}
	if(person==0)
		cout<<"Player 1 Looses";
	else
		cout<<"Player 2 Looses";
	return 0;
}
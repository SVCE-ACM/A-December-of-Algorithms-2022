#include<iostream>
using namespace std;

int main(){
	int limit,i=0,j=0,volume=0,height=0,temp=1;
	cout<<"Enter Limit";
	cin>>limit;

	int *arr = (int*)malloc(sizeof(int)*limit);

	for (i = 0; i < limit; ++i)
		cin>>arr[i];
		
	for(i=0;i<limit;i++){
		for(j=i+1;j<limit;j++){
			height = arr[i]>arr[j]?arr[j]:arr[i];
			temp = (j-i)*height;
			
			if(temp>volume)
				volume=temp;
		}
	}
	cout<<volume;
	return 0;

}
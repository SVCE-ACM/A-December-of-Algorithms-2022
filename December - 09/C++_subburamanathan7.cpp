#include<iostream>
#include<stdlib.h>

using namespace std;
int main(){
	int limit,flag=1;
	int max=0,max_Index=0;
	cout<<"enter the limit";
	cin>>limit;
	string sentence[limit];

	for(int i=0;i<limit;i++)
		cin>>sentence[i];
	cout<<"choose among these words\n";
	cout<<"[";
	for(int i=0;i<limit;i++)
		cout<<sentence[i]<<",";
	cout<<"]";
	cout<<"\n Lowecase\n";
	string choice;
	cout<<"Enter your string:";
	cin>>choice;

	for(int i=0;i<limit;i++){
		if(sentence[i].length()%2!=0){
			flag=0;
			if(max<sentence[i].length()){
				max=sentence[i].length();
				max_Index=i;
			}
		}
	}
	if(flag==1)
		cout<<"\nBetter luck next time\n";
	else{
		if(sentence[max_Index]==choice)
			cout<<"\nCongratzz! You got the right word\n";
		else
			cout<<"\nBetter luck next time\n";	
	}
	return 0;
}
	























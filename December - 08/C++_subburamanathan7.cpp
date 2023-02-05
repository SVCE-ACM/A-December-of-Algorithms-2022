#include<iostream>

using namespace std;

int main(){
	int i=0,length;
	char temp;
	string name ="SPEEDRUNNER";
	length=name.length();
	cout<<"Name:  "<<name<<"  of Length:"<<length;
	if(length%2!=0)
		length--;
	while(i<length){
		if(i+1!=length){
			temp=name[i];
			name[i]=name[i+1];
			name[i+1]=temp;
			i+=2;
		}
	}
	cout<<endl<<"Modified name:"<<name;
	return 0;
}
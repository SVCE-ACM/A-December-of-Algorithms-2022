#include<iostream>
using namespace std;

int main(){
	int test_cases,count=0,flag=0;
	cout<<"Enter number of test test_cases";
	cin>>test_cases;
	for(int i=0;i<test_cases;i++){
		string temp;
		cout<<"Enter the word to be pronounced:";
		cin>>temp;
		count=0;
		if(temp.length()<4){
			cout<<"Invalid Input\n";
			continue;
		}
		for(int j=0;j<temp.length();j++){
			if(temp[j] != 'a' && temp[j] != 'e' && temp[j] != 'o'&& temp[j] != 'i'&& temp[j] != 'u'){
				count++;
				if(count>=4){
					flag=1;
					break;
				}
			}
			else
				count=0;
		}
		if(flag==1){
			cout<<"NO\n";
		}
		else
			cout<<"YES\n";
	}
	return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main(){
	string codeWord;
	
	cout<<"Enter codeword";
	cin>>codeWord;

	if(codeWord.length()<=4){
		printf("Invalid codeword");
		return 0;
	}
	for(int i=codeWord.length()-4;i<codeWord.length()-2;i++)
		cout<<codeWord[i];
	for(int i=0;i<codeWord.length()-4;i++)
		cout<<codeWord[i];
	return 0;
}
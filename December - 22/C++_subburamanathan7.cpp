#include <iostream>

using namespace std;

int main(){
		
	string maps = "HOTDOG";
	string word ="CONEYISLANDONFRI";
	int j=0,index=0;
	string codeword;


	for(int i=0;i<word.length();++i){
		if(word[i]+ (maps[j]-'A')>90)
			codeword[index]=64+word[i]+(maps[j]-'A')-90;
		else
			codeword[index] = word[i]+ (maps[j]-'A');

		index++;
		j++;
		if(j>maps.length()-1)
			j=0;
	}
	cout<<"*Encoded Word";
	for (int i = 0; i < word.length(); ++i)
		cout<<codeword[i];

	return 0;
}
#include <iostream>
using namespace std;

bool isVowel(char ch)
{
	return ( ch == 'a' || ch == 'e' ||ch == 'i' || ch == 'o' ||ch == 'u');
}

int calcDiff(string str)
{   
    int c=0;
    if(str.length() >= 4){}
	for (int i = 0; i < str.length()-3; i++)
	{
		if ((!isVowel(str[i])) && (!isVowel(str[i+1])) && (!isVowel(str[i+2])) && (!isVowel(str[i+3])))
		{
			c=1;
		}
}
    return c;
}

int main()
{
    int n;
    cin >> n;

    int s[n];
    string str[n];
    for(int i=0; i<n;i++){
        cin >> s[i];
        cin >> str[i];
    }

    for(int i=0; i<n;i++){
        int s = calcDiff(str[i]);
        if(s==0){
            cout <<"YES"<<endl;
        }else{
            cout << "NO" << endl;
        }
    }

	return 0;
}
// Code by Samriddh Prasad


#include <bits/stdc++.h>
using namespace std;

int main()
{
	string str,ans,f;
	getline(cin, str);

    for(int i = 0; i < str.length(); i+=2){
        ans = str.substr(i,2);
        reverse(ans.begin(), ans.end());
        f+=ans;
    }
	cout<<f<<endl;
	return 0;
}

// CODE DONE BY Samriddh Prasad

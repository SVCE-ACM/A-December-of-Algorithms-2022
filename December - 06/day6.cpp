#include <bits/stdc++.h>
using namespace std;

int main() {
    cout<<"Enter size of numbers:";
    int size;cin>>size;
    cout<<"Enter pos:";
	int pos;cin>>pos;
    cout<<"Enter set of numbers:";
    vector<int>v(size);
    for(auto &x:v)cin>>x;
    
    cout<<"Player goinf first:";
    string s;
    cin>>s;
    int first_value = v[0];
    int pos_value = v[pos-1];
    
    int count;
    while(first_value>0){
        swap(--first_value,v[pos-1]);
        count++;
    }
    if(s=="Tanika"){
        if(count%2==0)
            cout<<"Tanika wins the game!\nBob loses the game!";
        else cout<<"Bob wins the game!\nTanika loses the game! ";
    }
    if(s=="Bob"){
        if(count%2==0)
            cout<<"Bob wins the game!\nTanika loses the game!";
        else cout<<"Tanika wins the game!\nBob loses the game! ";
    }

	return 0;
}

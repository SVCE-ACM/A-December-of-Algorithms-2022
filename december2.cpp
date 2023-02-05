#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;
    string ans;
    ans=ans+str[str.length()-4]+str[str.length()-3];
    for (int i=0;i<str.length()-4;i++){
        ans=ans+str[i];
    }
    cout<<ans;
}
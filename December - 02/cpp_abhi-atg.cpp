#include<bits/stdc++.h>
using namespace std;
/* Abhi-Atg */


int main(){

    string s;cin>>s;
    s.pop_back();
    s.pop_back();
    string ans;
    ans.push_back(s.back());
    s.pop_back();
    ans.push_back(s.back());
    s.pop_back();
    reverse(ans.begin(),ans.end());
    reverse(s.begin(),s.end());
    while(s.size()){
        ans.push_back(s.back());
        s.pop_back();
    }
    cout<<ans<<endl;

    return 0;
}
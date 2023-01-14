#include<bits/stdc++.h>
using namespace std;
/* Abhi-Atg */


int main(){

    string s;cin>>s;
    string ans;
    int n=s.size();
    for(int i=0;i<n;i+=2){
        if(i+1<n){
            ans.push_back(s[i+1]);
        }
        ans.push_back(s[i]);
    }
    cout<<ans<<endl;



    return 0;
}
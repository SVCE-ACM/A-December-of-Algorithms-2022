#include<bits/stdc++.h>
using namespace std;
/* Abhi-Atg */


int main(){

    int t;cin>>t;
    string c="aeiou";
    while(t--){
        int n;cin>>n;
        string s;cin>>s;
        int cnt=-1;
        int flag=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<5;j++){
                if(c[j]==s[i]){
                    cnt=-1;
                }
            }
            cnt++;
            if(cnt>=4){
                flag=1;
            }
        }
        if(flag){
            cout<<"NO\n";
        }else{
            cout<<"YES\n";
        }
    }    



    return 0;
}
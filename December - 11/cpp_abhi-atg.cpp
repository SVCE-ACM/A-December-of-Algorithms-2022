#include<bits/stdc++.h>
using namespace std;
/* Abhi-Atg */


int main(){

    string s;cin>>s;
    int n=s.size();
    string jump;cin>>jump;
    int m=jump.size();
    int ans=0;
    int ind=0;
    for(int i=0;i<m;i++){
        if(jump[i]=='2'){
            if(s[i+2]!='_'){
                break;
            }
            ans++;
        }else{
            if(s[i+1]!='_'){
                break;
            }
            ans++;
        }
    }
    cout<<ans<<endl;

    return 0;
}
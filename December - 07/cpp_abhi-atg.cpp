#include<bits/stdc++.h>
using namespace std;
/* Abhi-Atg */


int main(){

    int n=15;
    vector<string> v;
    for(int i=0;i<n;i++){
        string s;cin>>s;
        v.push_back(s);
    }

    string s;cin>>s;
    int len=s.size();
    int flag=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(v[i][j]==s[0]){
                if(j+len<=n){
                    int ok=1;
                    for(int k=j;k<j+len;k++){
                        if(v[i][k]!=s[k-j]){
                            ok=0;
                            break;
                        }
                    }
                    if(ok){
                        flag=1;
                    }
                }
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(v[j][i]==s[0]){
                if(j+len<=n){
                    int ok=1;
                    for(int k=j;k<j+len;k++){
                        if(v[k][i]!=s[k-j]){
                            ok=0;
                            break;
                        }
                    }
                    if(ok){
                        flag=1;
                    }
                }
            }
        }
    }

    if(flag){
        cout<<"FOUND\n";
    }else{
        cout<<"NOT FOUND\n";
    }


    return 0;
}
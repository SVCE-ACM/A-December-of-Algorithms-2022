#include<bits/stdc++.h>
using namespace std;
/* Abhi-Atg */


int main(){

    int n;cin>>n;
    vector<string> v;
    fflush(stdin);
    for(int i=0;i<n;i++){
        string s;
        getline(cin,s);
        v.push_back(s);
    }
    vector<string> ans=v;
    for(int i=0;i<n;i++){
        int m=v[i].size();
        for(int j=0;j<m;j++){
            if(ans[i][j]=='-'){
                ans[i][j]='0';
            }
        }
    }
    for(int i=0;i<n;i++){
        int m=v[i].size();
        for(int j=0;j<m;j++){
            if(v[i][j]=='#'){
                if(i-1>=0 && ans[i-1][j]!='#'){
                    ans[i-1][j]++;
                }
                if(i+1<n && ans[i+1][j]!='#'){
                    ans[i+1][j]++;
                }
                if(j-5>=0 && ans[i][j-5]!='#'){
                    ans[i][j-5]++;
                }
                if(j+5<m && ans[i][j+5]!='#'){
                    ans[i][j+5]++;
                }
                if(i-1>=0 && j-5>=0 && ans[i-1][j-5]!='#'){
                    ans[i-1][j-5]++;
                }
                if(i-1>=0 && j+5<m && ans[i-1][j+5]!='#'){
                    ans[i-1][j+5]++;
                }
                if(i+1<n && j-5>=0 && ans[i+1][j-5]!='#'){
                    ans[i+1][j-5]++;
                }
                if(i+1<n && j+5<m && ans[i+1][j+5]!='#'){
                    ans[i+1][j+5]++;
                }
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<ans[i]<<endl;
    }

    








    return 0;
}
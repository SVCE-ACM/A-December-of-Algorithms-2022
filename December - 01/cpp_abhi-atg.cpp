#include<bits/stdc++.h>
using namespace std;
/* Abhi-Atg */

int check(char &c){
    if(c=='F'){
        return 15;
    }else if(c=='E'){
        return 14;
    }else if(c=='D'){
        return 13;
    }else if(c=='C'){
        return 12;
    }else if(c=='B'){
        return 11;
    }else if(c=='A'){
        return 10;
    }
    return (int)(c-'0');
}

char solve(string &s){
    return (char)(check(s[0])*16+check(s[1]));
}

int main(){

    int n;cin>>n;
    while(n--){
        fflush(stdin);
        string s;
        getline(cin,s);
        string ans;
        int len=s.size();
        string c;
        for(int i=0;i<len;i++){
            if(s[i]!=' ' && s[i]!='{' && s[i]!='}' && s[i]!=','){
                c.push_back(s[i]);
            }
            if(c.size()==2){
                ans.push_back(solve(c));
                c.clear();
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
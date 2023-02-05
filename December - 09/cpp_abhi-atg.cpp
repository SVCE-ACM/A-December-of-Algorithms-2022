#include<bits/stdc++.h>
using namespace std;
/* Abhi-Atg */


int main(){

    int n;cin>>n;
    string ans;

    for(int i=0;i<n;i++){
        string s;cin>>s;
        if(s.size()&1){
            if(ans.size()<s.size()){
                ans=s;
            }
        }
    }

    if(ans.size()){
        cout<<ans<<endl;
    }else{
        cout<<"Better luck next time\n";
    }



    return 0;
}
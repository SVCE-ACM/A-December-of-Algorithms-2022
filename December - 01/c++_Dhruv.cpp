#include<bit/stdc++.h>

int main(){
  int t;
  cin>>t;
  
  while(t--){
    vector<int>v; // v= { 56, 6F, 75, 67, 68, 74}
    int n= v.size();
    
    string res="";
    
    for(int i=0;i<n;i+=2){
      string str = x.substr(i,2);
      
      char ch = stoul(str,nullptr,16);
      
      res+=ch;
    }
    cout<<res<<endl;
  }
}

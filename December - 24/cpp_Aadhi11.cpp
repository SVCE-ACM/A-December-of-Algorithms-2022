#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
   set <string> visited;
   string ret;
   string crackSafe(int n, int k) {
      if(n == 1 && k == 1) return "0";
      ret = "";
      string s = "";
      for(int i = 0; i < n - 1; i++){
         s += "0";
      }
      dfs(s, k);
      for(int i = 0; i < n - 1; i++) ret += "0";
      return ret;
   }
   void dfs(string s, int k) {
      string temp;
      for(int i = 0; i < k; i++){
         temp = s + to_string(i);
         if(!visited.count(temp)){
            visited.insert(temp);
            temp = temp.substr(1);
            dfs(temp, k);
            ret += to_string(i);
         }
      }
   }
};
 int main(){
   Solution ob;
   int n,k;
   cout<<"n = ";
   cin>>n;
   cout<<"k = ";
   cin>>k;
   cout <<"'"<< (ob.crackSafe(n,k))<<"'";
}



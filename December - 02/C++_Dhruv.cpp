#include<bits/stdc++.h>
using namespace std;
int main(){
  
  string s;
  cin>>s;
  
  int n = s.length();//kipediawiae
  
  string removing_lastTwo =  s.substr(0,n-2);// eliminating last two words
                                              // kipediawi
  // updating the length
  n = removing_lastTwo.size();
  
  string getting_ogWords =  removing_lastTwo.substr(n-2,2);//wi
  
  string lastTime_removing = removing_lastTwo.substr(0,n-2);//kipedia
  
  
  string og = getting_ogWords+lastTime_removing;//wikipedia
  cout<<og<<endl;
  
  return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
//      Position=3
//   Set of numbers: 5 4 4 
//   Player going first: Tanika
    int size;cin>>size;
	int pos;cin>>pos;
    vector<int>v(size);
    for(auto &x:v)cin>>x;
    
    int first_value = v[0];
    int pos_value = v[pos-1];
    
    int count;
    while(first_value>0){
        swap(--first_value,v[pos-1]);
        count++;
    }
    (count%2==0)?cout<<"Tanika ":cout<<" Bob ";
    
	return 0;
}

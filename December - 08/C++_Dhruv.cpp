#include <bits/stdc++.h>
using namespace std;

int main() {
    // DEMOCRACY -> ED OM RC CA Y
    string input ;
    cin>>input;
    int n = size(input);
    for(int i=0;i<n-2;i+=2){
        swap(input[i],input[i+1]);
        
    }
    cout<<input;
    
	return 0;
}

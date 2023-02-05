#include <bits/stdc++.h>
using namespace std;

int main() {
    // int n;cin>>n;
    // vector<char> input(n) ;
    // for(auto &x:input)cin>>x;
    
    // int m;cin>>m;
    // vector<int> steps(m) ;
    // for(auto &i:steps)cin>>i;
    char input[] = [‘_’,’~’,’_’,’_’,’_’,’_’,’~’,’_’,’_’,’~’,’_’,’~’];
    int steps[]=[2,1,1,1,2,1,1,1,1];
    int n = input.length();
    int m = steps.length();
    int score =0;
    // if(input[0]=='~')cout<<score<<endl;
    // else{
        int jumps=0;
        for(int i=0;i<m and jumps<n;i++)
        {
            jumps+= steps[i]; //2
            if(input[jumps]=='_')
            {
                score+=steps[i];
                // i+=steps[i];
            }
            else if(input[jumps]=='~')break;
        }
    cout<<score<<endl;
   
    return 0;
}

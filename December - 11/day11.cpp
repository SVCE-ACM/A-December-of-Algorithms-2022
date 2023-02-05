#include <bits/stdc++.h>
using namespace std;

int main() {
    // int n;cin>>n;
    // vector<char> input(n) ;
    // for(auto &x:input)cin>>x;
    
    // int m;cin>>m;
    // vector<int> steps(m) ;
    // for(auto &i:steps)cin>>i;
    vector<char> input{'_','~','_','~','_','_','~','_','_','~','_','~'};
    vector<int> steps{2,2,1,1,1,1,2,1,1};
    int n = input.size();
    int m = steps.size();
    int score =0;
        int jumps=0;
        for(int i=0;i<m and jumps<n;i++)
        {
            jumps+= steps[i];
            if(input[jumps]=='_')
            {
                score+=1;
            }
            else if(input[jumps]=='~')break;
        }
    cout<<score<<endl;
   
    return 0;
}

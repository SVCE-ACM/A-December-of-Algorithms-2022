#include<iostream>
#include<vector>

using namespace std;

void input(int);

int main()
{
    int n;
    cin>>n;
    input(n);
}

void input(int n) {
    bool isBipartiteFlag=true;
    int edgeCounter=0;

    vector<vector<int>> adjMat(n, vector<int> {0});
    for (int i = 0; i<n; i++) {
        for (int j = 0; j < n; j++) {
           cin>>adjMat[i][j]; 
           // I found out, 1 cannot exist if both i & j are odd or even at the same time
           // and should contain a loop with all vertices
           if(adjMat[i][j] == 1 && ((i%2==0 && j%2==0) || (i%2!=0 && j%2!=0))){
                   isBipartiteFlag = false;
            }
        }
    } 
    cout<<isBipartiteFlag;
}


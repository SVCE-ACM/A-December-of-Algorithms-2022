#include<iostream>
#include<vector>
using namespace std;
bool yLow(int y) {
    return y>=0;
}
bool yHigh(int y, int size) {
    return y<size;
}
bool xLow(int x) {
    return x>=0;
}
bool xHigh(int x, int size) {
    return x<size;
}
bool isBomb(char ch){
    return ch=='#';
}
char increment(char ch) {
    int c = ch -'0';
    ++c;
    c = c + '0';
    ch = c;
    return ch;
}
void minesweep(vector<vector<char>> &arr) {
    int n = arr.size();
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(isBomb(arr[i][j])){
                // change up down left right of bomb
                if(xLow(i-1)&&!isBomb(arr[i-1][j])){
                    arr[i-1][j] = increment(arr[i-1][j]);
                }
                if(xHigh(i+1, n)&&!isBomb(arr[i+1][j])){
                    arr[i+1][j] = increment(arr[i+1][j]);
                }
                if(yLow(j-1)&&!isBomb(arr[i][j-1])){
                    arr[i][j-1] = increment(arr[i][j-1]);
                }
                if(yHigh(j+1, n)&&!isBomb(arr[i][j+1])){
                    arr[i][j+1] = increment(arr[i][j+1]);
                }
                // change diagonals
                if( xHigh(i+1, n) && yHigh(j+1, n)&&!isBomb(arr[i+1][j+1])) {
                    arr[i+1][j+1] = increment(arr[i+1][j+1]);
                }
                if( xHigh(i+1, n) && yLow(j-1)&&!isBomb(arr[i+1][j-1])) {
                    arr[i+1][j-1] = increment(arr[i+1][j-1]);
                }
                if( xLow(i-1) && yHigh(j+1, n)&&!isBomb(arr[i-1][j+1])) {
                    arr[i-1][j+1] = increment(arr[i-1][j+1]);
                }
                if( xLow(i-1) && yLow(j-1)&&!isBomb(arr[i-1][j-1])) {
                    arr[i-1][j-1] = increment(arr[i-1][j-1]);
                }
            }
        }
    }
}

int main(){
    // Get size as input
    int n;
    cin>>n;
    // Create char matrix, default value is 0
    vector<vector<char>> arr(n, vector<char> (n, '0'));
    char inp;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>inp;
            if(inp == '#')
                arr[i][j]=inp;
        }
    }

    minesweep(arr);

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}

//Question 3:
#include <bits/stdc++.h>
using namespace std;

int count(char a){
        if(a == '#'){
            return 1;
        } 
    return 0;
}

void FindTheBomb( vector<vector<char>>arr, int row, int col){
    for(size_t i=0; i<row; i++){
        for(size_t j=0; j<col; j++){
            if(arr[i][j]=='-'){
                if(i==0 && j==0){
                    cout << count(arr[i][j+1]) + count(arr[i+1][j]) + count(arr[i+1][j+1]) << " ";  
                } else if(i==0){
                    cout << count(arr[i][j-1]) + count(arr[i][j+1]) + count(arr[i+1][j-1]) + count(arr[i+1][j]) + count(arr[i+1][j+1]) << " ";
                } else if(j==0){
                    cout << count(arr[i-1][j]) + count(arr[i-1][j+1]) + count(arr[i][j+1]) + count(arr[i+1][j]) + count(arr[i+1][j+1]) << " "; 
                } else 
                    cout << count(arr[i-1][j-1]) + count(arr[i-1][j]) + count(arr[i-1][j+1]) + count(arr[i][j-1]) + count(arr[i][j+1]) + count(arr[i+1][j-1]) + count(arr[i+1][j]) + count(arr[i+1][j+1]) << " ";
            } else {
                cout << arr[i][j] << " ";
            }
        }
        cout << endl;
    }
}

int main(){
    int col,row;
    cin >> col;
    cin >> row;
    vector<vector<char>> arr(row+1, vector<char>(col+1,0));
    
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin >> arr[i][j];
        }
    }
    
    FindTheBomb(arr,row,col);
    
    return 0;
}

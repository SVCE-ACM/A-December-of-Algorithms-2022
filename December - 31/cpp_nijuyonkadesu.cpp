#include<iostream>
#include<vector>

using namespace std;

void nQueens(vector<vector<int>>& kitchenFloor,int row = 0, int column = 0);
bool isPossibleToMove(vector<vector<int>>&, int , int);
void printBoard(vector<vector<int>>&);
static int count = 0;


int main (int argc, char *argv[])
{
    int tilesCount;
    cin>>tilesCount;
    vector<vector<int>> kitchenFloor(tilesCount, vector<int> (tilesCount, 0));
    nQueens(kitchenFloor);
    cout<<count<<"\n";
    return 0;
}

void nQueens(vector<vector<int>>& kitchenFloor, int row, int column){

// base condition
    if(row == kitchenFloor[0].size()){
        count++;
        printBoard(kitchenFloor);
        return;
    }

// if it's possible to place the queen, place it and go to next row
    if(isPossibleToMove(kitchenFloor, row, column)){
        kitchenFloor[row][column] = 1;
        nQueens(kitchenFloor, row + 1);
        kitchenFloor[row][column] = 0;
    }
// if queen cannot be placed on current positon, move towards right and check
    if (column + 1 < kitchenFloor[0].size())
        nQueens(kitchenFloor, row, column + 1);
}

bool isPossibleToMove(vector<vector<int>>& kitchenFloor, int row, int column){
    bool safe = true;
    
    int i = row, j = column;
    // left diagonal, check for queen
    while(i>=0 && j>=0 && safe){
        safe = !(kitchenFloor[i][j] == 1);
        j--;
        i--;
    }

    // right diagonal
    i = row, j = column;
    while(i<kitchenFloor[0].size() && j>=0 && safe){
        safe = !(kitchenFloor[i][j] == 1);
        j++;
        i--;
    }

    // top
    j = row;
    while(j>=0 && safe){
        safe = !(kitchenFloor[j--][column] == 1);
    }
    return safe;
}

void printBoard(vector<vector<int>>& kitchenFloor){
    for(auto part: kitchenFloor){
        for(auto it = part.begin(); it < part.end(); it++){
            cout<< *it;
        }
        cout<< endl;
    }
    cout<< endl;
}


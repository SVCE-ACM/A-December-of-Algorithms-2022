#include <iostream>
#include <vector>

using namespace std;

int main (int argc, char *argv[])
{
    char ch;
    string message;
    cin >> message;

    int rows, i=0, j=0, pos=0;
    bool startFlag= true;
    cin >> rows;

    vector<vector<char>> wall(rows, vector<char> (message.size(), ' '));
    
    // i -> upto row | i-> 0 && j+= upto row
    // i ossilates from 0 to row-1
    // j starts from 1 to row-1 when i reaches maximum


    while(startFlag){

        for(i=0; i<rows; i++){
            if(pos != message.size()){
                ch = message[pos++];
                wall[i][j] = ch;
            }
            else {
                startFlag= false;
                break;
            }
        }

        for(i=rows-2; i>0; i--){
            if(pos != message.size()){
                ch = message[pos++];
                j++;
                wall[i][j] = ch;
            }
            else {
                startFlag= false;
                break;
            }
        }
        j++;
    }

    for(auto row: wall){
        for(auto it = row.begin(); it != row.end(); it++){
            cout<<*it<<" ";
        }
        cout<<"\n";
    }

    return 0;
}

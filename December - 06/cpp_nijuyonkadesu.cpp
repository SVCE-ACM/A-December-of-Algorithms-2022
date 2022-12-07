#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int gameLoop(vector<int>&);

int main(){
    // get size
    int n;
    cin>>n;
    vector<int> playground(n, 0);

    for(auto it=playground.begin(); it<playground.end(); it++) {
        cin>>*it;
    }
    cout<<"\nPlayer "<<gameLoop(playground)<<" has won!";
    return 0;
}

int gameLoop(vector<int> &playground){
    int position=0;
    int winner=0;
    do{
        cout<<"Player 01: ";
        cin>>position;
        (*playground.begin()--);
        if(--(*playground.begin())==0){
           winner = 1;
           break;
        }

        iter_swap(playground.begin(), playground.begin()+position);

        cout<<"Player 02: ";
        cin>>position;
        if(--(*playground.begin())==0){
           winner = 2;
           break;
        }

        iter_swap(playground.begin(), playground.begin()+position);
    }while(1);

    for(auto i: playground)
        cout<<i<<" ";
    cout<<"\n";

    return winner;
}


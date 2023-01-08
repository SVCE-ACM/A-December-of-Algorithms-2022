#include<iostream>
#include<vector>

using namespace std;
void getInput(vector<char>&);

int main(){
    // land: _
    // water: ~
    vector<char> world;
    vector<char> moves;

    getInput(world);
    getInput(moves);

    int totalSteps = 0;
    for(auto i: moves){
        totalSteps += i - '0'; // convert char to int
        if(world[totalSteps] == '~'){
            totalSteps -= i - '0';
            break;
        }
    }
    cout<<"Monkey Score: "<<totalSteps;
}

void getInput(vector<char>& fillThis) {
    char ch;
    do{
        ch=getchar();
        fillThis.push_back(ch);
    }while(ch!='\n');
}

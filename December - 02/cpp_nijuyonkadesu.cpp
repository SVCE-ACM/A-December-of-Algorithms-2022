#include<iostream>
#include<sstream>
#include<string>

using namespace std;
void secret(string &msg) {
    msg.pop_back();
    msg.pop_back();
    msg.insert(0, 1, msg[msg.length()-1]);
    msg.insert(0, 1, msg[msg.length()-2]);
    //            ^ size of string
    //         ^ pos
    msg.pop_back();
    msg.pop_back();
}

int main(){
    string msg;
    cin>>msg;
    secret(msg);
    cout<<msg;
    return 0;
}

#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    string msg;
    int i=0;
    cin>>msg;
    do{
        swap(msg[i], msg[i+1]);
        i+=2;
    } while (i+2<msg.length());
    cout<<msg;
}

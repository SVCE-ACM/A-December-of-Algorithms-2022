// Question 1:
#include <bits/stdc++.h>
using namespace std;
 
string hexToASCII(string hex){
    string ascii = "";
    for (size_t i = 0; i < hex.length(); i += 2){
        string part = hex.substr(i, 2);
        char ch = stoul(part, nullptr, 16);
        ascii += ch;
    }
    return ascii;
}
 
int main(){
    int n;
    cin >> n;      
    while(n>0){
        string a;
        cin >> a;        //Give input as a single word.
        cout << hexToASCII(a) << endl;
        n--;
    }
    return 0;
}

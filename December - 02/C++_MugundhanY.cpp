// Question 2:
#include <bits/stdc++.h>
using namespace std;

string piglatin (string s){
    int len = s.length ();
    s.resize (len - 2);
    string part = s.substr(s.size()-2, s.size()-1);

    return part + s.substr (0, s.size()-2);
}

int main (){
    string str;
    cin >> str;
    string word = piglatin (str);
    cout << word;
    return 0;
}

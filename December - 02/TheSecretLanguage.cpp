#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str, str0;
    cin >> str;
    str.erase(str.size() - 2);
    str0 = str.substr(str.length() - 2, 2);
    str.erase(str.size() - 2);
    str = str0 + str;
    cout << str;
}
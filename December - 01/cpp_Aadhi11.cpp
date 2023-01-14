#include <bits/stdc++.h>
using namespace std;
 
string hexToASCII(string hex)
{
    string ascii = "";
    for (size_t i = 0; i < hex.length(); i += 2)
    {
        string part = hex.substr(i, 2);
 
        char ch = stoul(part, nullptr, 16);
 
        ascii += ch;
    }
    return ascii;
}
 
int main()
{
    string  hex[10];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>hex[i];
    }
    
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout << hexToASCII(hex[i]) << endl;
    }
    return 0;
}

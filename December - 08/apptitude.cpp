#include <bits/stdc++.h>
using namespace std;

int main()
{
    string word;
    cout << "INPUT: ";
    cin >> word;
    string sub = word;
    vector<char> v;
    int n = word.length();

    for (int i = 0; i < n; i += 2)
    {
        swap(sub[i], sub[i + 1]);
    }

    if (n % 2 != 0)
    {
        sub = sub + word.back();
    }

    cout << "OUTPUT: " << sub;
}
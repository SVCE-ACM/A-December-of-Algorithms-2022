#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> vec;
    int n, x, k = 0;
    string a;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        vector<int> v1;
        for (int i = 0; i < a.length(); i += 2)
        {
            string s = a.substr(i, 2);
            int ascii = stoi(s, 0, 16);
            v1.push_back(ascii);
        }
        vec.push_back(v1);
    }

    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = 0; j < vec[i].size(); j++)
        {
            cout << char(vec[i][j]);
        }
        cout << endl;
    }
    return 0;
}
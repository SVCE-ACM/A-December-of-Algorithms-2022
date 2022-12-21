#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<vector<string>> vec;
    string a;
    for (int i = 0; i < n; i++)
    {
        vector<string> v1;
        for (int j = 0; j < n; j++)
        {
            cin >> a;
            v1.push_back(a);
        }
        vec.push_back(v1);
    }
    cout << endl;

    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = 0; j < vec[i].size(); j++)
        {
            int count = 0;
            if (vec[i][j] == "-" && vec[i][j + 1] == "#")
            {
                count++;
            }
            if (vec[i][j] == "-" && vec[i + 1][j] == "#")
            {
                count++;
            }
            if (vec[i][j] == "-" && vec[i + 1][j + 1] == "#")
            {
                count++;
            }
        }
    }

    for (int i = 0; i < vec.size(); i++)
    {
        for (auto x : vec[i])
        {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}
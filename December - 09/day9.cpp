#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> input(n);

    for (auto &x : input)
        cin >> x;
    int max_len = INT_MIN;

    string word;
    for (auto e : input)
    {
        int len = e.size();
        if (e.size() % 2 != 0)
        {
            max_len = max(len, max_len);
        }
        else
            continue;
    }
    for (auto e : input)
    {
        if (e.size() == max_len)
        {
            word = e;
            break;
        }
    }
    if (max_len == INT_MIN)
        cout << "Better Luck Next Time";
    else
        cout << word;

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

void SubarrayMax(vector<int> nums, int n)
{
    int maxsum = 0, currsum = 0;
    int maxstart = 0, maxend = 0;
    int currstart = 0, currend = 0;

    for (int i = 0; i < n; i++)
    {
        currsum = currsum + nums[i];
        currend = i;

        if (currsum < 0)
        {
            currsum = 0;
            currstart = currend + 1;
        }

        if (maxsum < currsum)
        {
            maxsum = currsum;
            maxstart = currstart;
            maxend = currend;
        }
    }
    cout << "Profit Value: " << maxsum << "\n";
    cout << "Proposed days to sell: Day: " << maxstart + 1 << " Day: " << maxend + 1 << "\n";

    cout << "Stock market Change Values: ";
    for (int i = maxstart; i <= maxend; i++)
    {
        cout << nums[i] << " ";
    }
}

int main()
{
    int n, value;
    cout << "No. of days: ";
    cin >> n;

    vector<int> trade;
    cout << "Given stock market change values: ";
    for (int i = 0; i < n; i++)
    {
        cin >> value;
        trade.push_back(value);
    }

    SubarrayMax(trade, n);
    return 0;
}
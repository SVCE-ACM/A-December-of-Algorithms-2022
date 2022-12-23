#include <bits/stdc++.h>
using namespace std;

int main()
{
    uint16_t income10per = 50000 * 0.1;
    uint16_t fuel_price;
    cin >> fuel_price;
    uint8_t adjust_value = 36;
    // adjust value
    // so calculating for 3rd day , it comes 10 times , so 6*10 = 60
    // calculating for 5th day , it comes 6 times, so 4*6 = 24 (negative)
    // so adjusting values  = 60 - 24 = +36
    // normal mathematics
    int total = (fuel_price * 2 * 31) + adjust_value;
    cout << total << endl;
    if (total <= income10per)
    {
        cout << "EXPENDITURE WITHIN LIMIT" << endl;
    }
    else
    {
        cout << "EXPENDITURE EXCEEDING LIMIT" << endl;
    }

    return 0;
}
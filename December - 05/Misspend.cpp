#include <bits/stdc++.h>
using namespace std;

int main()
{
    uint16_t income10per = 50000 * 0.1;
    uint16_t fuel_price;
    cin >> fuel_price;
    uint8_t adjust_value = 36;
    // adjust value
    // so calculating for 3rd day , it comes 10 time~s , so 6*10 = 60
    // calculating for 5th day , it comes 6 times, so 4*6 = 24 (negative)
    // so adjusting values  = 60 - 24 = +36
    // normal mathematics
    int total = (fuel_price * 2 * 31) + adjust_value;
    cout << total << endl;
    string result = (total <= income10per) ? "EEXPENDITURE WITHIN LIMIT" : "EXPENDITURE EXCEEDING LIMIT";
    cout << result;

    return 0;
}
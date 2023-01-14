#include <bits/stdc++.h>
using namespace std;
int main() {
    //"spaghettigood"
    string Str;
    cin>>Str;
    int Row;
    cin >> Row;
    vector<vector<char>> zigzag(Row);
    int row = 0;
    int direction = 1;
    for (char c : Str) {
        zigzag[row].push_back(c);
        if (row == Row - 1) {
            direction = -1;
        }
        else if (row == 0) {
            direction = 1;
        }
        row += direction;
    }
    for (auto& row : zigzag) {
        for (char c : row) {
            std::cout << c;
        }
    }
    std::cout << std::endl;
    return 0;
}

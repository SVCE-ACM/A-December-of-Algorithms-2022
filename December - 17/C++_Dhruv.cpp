#include <bits/stdc++.h>
#include <vector>
#include <string>
using namespace std;
int main() {
    // input string and number of rows
    // std::string Str = "spaghettigood";
    string Str;
    cin>>Str;
    int Row = 4;

    // initialize the zigzag pattern
    std::vector<std::vector<char>> zigzag(Row);

    // initialize the variables to traverse the rows
    int row = 0;
    int direction = 1;

    // iterate over the characters in the string
    for (char c : Str) {
        // add the character to the current row
        zigzag[row].push_back(c);

        // update the row and direction
        if (row == Row - 1) {
            direction = -1;
        }
        else if (row == 0) {
            direction = 1;
        }
        row += direction;
    }

    // print the zigzag pattern row-wise
    for (auto& row : zigzag) {
        for (char c : row) {
            std::cout << c;
        }
    }
    std::cout << std::endl;

    return 0;
}

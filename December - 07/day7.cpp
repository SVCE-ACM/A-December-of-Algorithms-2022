#include <bits/stdc++.h>
using namespace std;

#define R 15
#define C 16

int x[] = {-1, 0, 0, 1};
int y[] = {0, -1, 1, 0};

bool search2D(char grid[R][C], int row, int col, string word)
{
    if (grid[row][col] != word[0])
        return false;

    int len = word.length();
    for (int dir = 0; dir < 4; dir++)
    {
        int k, rd = row + x[dir], cd = col + y[dir];
        for (k = 1; k < len; k++)
        {
            if (rd >= R || rd < 0 || cd >= C || cd < 0)
                break;

            if (grid[rd][cd] != word[k])
                break;
            rd += x[dir], cd += y[dir];
        }
        if (k == len)
            return true;
    }
    return false;
}

int patternSearch(char grid[R][C], string word)
{
    int flag = 0;
    for (int row = 0; row < R; row++)
        for (int col = 0; col < C; col++)
            if (search2D(grid, row, col, word))
                flag = 1;
    return flag;
}

int main()
{
    char grid[R][C] = {"ASSERTIVENESSLJ",
                       "CFOGOODPOSITIVE",
                       "OPENBMUREWOPRPS",
                       "MEDIATIONELDIOG",
                       "MAASREGJEWINWIN",
                       "UCIAEMOEECSKENI",
                       "NEMRSHACDVTWTTL",
                       "ITEHOTLTSTERAOE",
                       "CASPLGLSIUNERFE",
                       "AISAUSYTPOISEVF",
                       "TTARTTDOCENPPIH",
                       "IOGAIGUPYMGOOEE",
                       "OGEPOAFPQIENOWA",
                       "NECONFLICTSDCER",
                       "FNHTCATNOCEYEBT"};

    string ss;
    cin >> ss;
    int s = patternSearch(grid, ss);

    if (s == 1)
    {
        cout << "Found";
    }
    else
    {
        cout << "Not Found";
    }
    return 0;
}

// Code written by Samriddh Prasad

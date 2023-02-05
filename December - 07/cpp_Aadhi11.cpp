#include <bits/stdc++.h>
using namespace std;
 int k=0;
int x[] = { -1, -1, -1,  0, 0,  1, 1, 1 };
int y[] = { -1,  0,  1, -1, 1, -1, 0, 1 };
 
bool search2D(char *grid, int row, int col,
               string word, int R, int C)
{
    if (*(grid+row*C+col) != word[0])
        return false;
 
    int len = word.length();
 
    for (int dir = 0; dir < 8; dir++) {
        int k, rd = row + x[dir], cd = col + y[dir];
 
        for (k = 1; k < len; k++) {
            if (rd >= R || rd < 0 || cd >= C || cd < 0)
                break;
 
            if (*(grid+rd*C+cd) != word[k])
                break;
 
            rd += x[dir], cd += y[dir];
        }
 
        if (k == len)
            return true;
    }
    return false;
}
 
void patternSearch(char *grid, string word,
                  int R, int C)
{
    for (int row = 0; row < R; row++)
        for (int col = 0; col < C; col++)
            if (search2D(grid, row, col, word, R, C))
                k=1;
            
}
 
int main()
{
      int R = 15, C = 15;
    char grid[R][C] = { "ASSERTIVENESSLJ","CFOGOODPOSITIVE","OPENBMUREWOPRPS","MEDIATIONELDIOG","MAASREGJEWINWIN","UCIAEMOEECSKENI","NEMRSHACDVTWTTL","ITEHOTLTSTERAOE","CASPLGLSIUNERFE","AISAUSYTPOISEVF","TTARTTDOCENPPIH","IOGAIGUPYMGOOEE","OGEPOAFPQIENOWA","NECONFLICTSDCER","FNHTCATNOCEYEBT"};
    string x;
    cin>>x;
    patternSearch((char *)grid, x , R, C);
    cout<<endl;
    if(k==1)
    cout<<"Found";
    else
    cout<<"Not Found";
    return 0;
}



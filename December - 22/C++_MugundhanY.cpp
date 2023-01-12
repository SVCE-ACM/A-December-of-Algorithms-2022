//Question 22:
#include <bits/stdc++.h>
using namespace std;

void TheMarkowitzParadox(char a, char b){
    int c = a - 'A';
    int e = ((int(b) + c)-65)%26;
    char d = 65 + e;
    cout << d;
 }
int main(){
    string a, b;
    cin >> a;
    cin >> b;
    char* a1 = &a[0];
    char* b1 = &b[0];
    int n1 = a.size(), n2 = b.size(), x=0, i=0;
    while(i<n2){
        if(x==n1) x = 0;
        TheMarkowitzParadox(a1[x], b1[i]);
        i++, x++;
    }
    return 0;
}

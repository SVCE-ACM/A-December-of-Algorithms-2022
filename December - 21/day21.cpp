#include <bits/stdc++.h>
using namespace std;

void towerOfHanoi(int totalDisc, string A, string B, string C){
    if(totalDisc > 0)
    {
        towerOfHanoi(totalDisc-1, A, C, B);
        cout << "Move disk " << totalDisc << " from tower " << A << " to tower " << C << endl;
        towerOfHanoi(totalDisc-1, B, A, C);
    }
}

int main(){
    int totalDisc;
    cin >> totalDisc;
    towerOfHanoi(totalDisc, "I", "II", "III");
    return 0;
}

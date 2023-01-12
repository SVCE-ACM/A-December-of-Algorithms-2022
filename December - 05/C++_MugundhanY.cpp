//Question 5:
#include <bits/stdc++.h>
using namespace std;

void expenditure(int &fuelprice) {
    int Expenditure = 0;
    for(int i=1; i<=31; i++){
        if(i%3 == 0 && i%5==0){
            Expenditure += (fuelprice+1)*2;
        } else if((i%5)==0){
            Expenditure += (fuelprice-2)*2;
        } else if ((i%3)==0){
            Expenditure += (fuelprice+3)*2;
        } else {
            Expenditure += fuelprice*2;
        }
    }
    cout << "Expenditure=" << Expenditure << endl;
    if(Expenditure > 5000) cout << "“EXPENDITURE EXCEEDING LIMIT”";
    else cout << "“EXPENDITURE WITHIN LIMIT”";
}

int main(){
    cout << "fuel_price=";
    int fuelprice;
    cin >> fuelprice;
    expenditure(fuelprice); 
    return 0;
}

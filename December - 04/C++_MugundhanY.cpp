//Question 4:
#include <bits/stdc++.h>
using namespace std;

//Kadane's Algorithm
void maxProfit(int prices[], int n) {
    int sum = 0, profit=INT_MIN, sellday, buyday=1;
    for(int i=0; i<n; i++){
        sum+=prices[i];
        
        if(profit < sum){
            profit = sum;
            sellday = i+1;
        }
        if(sum < 0){
            sum=0;
            buyday = i+2;
        }
    }
    cout << "Profit Value: " << profit << endl;
    cout << "Profit Value: Day: " << buyday << " to Day: "<< sellday << endl;
    cout << "Stock market Change Values: ";
    for(int i=buyday-1; i<sellday; i++){
            cout << prices[i] << " ";
    }
}

int main(){
    cout << "No. of Days:";
    int n;
    cin >> n;
    cout << "Given stock market change values:";
    int prices[n];
    for(int i=0; i<n; i++){
        cin >> prices[i];
    }
    maxProfit(prices, n); 
    return 0;
}

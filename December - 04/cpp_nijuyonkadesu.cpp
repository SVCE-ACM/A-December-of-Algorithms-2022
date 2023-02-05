#include<climits>
#include<iostream>
#include<vector>

using namespace std;

vector<int> maxProfit(vector<int> &history) {
    int days = history.size();
    int start=0, end;
    int localMax = 0, overallMax = INT_MIN; // -infinity
    for (int i=0; i<days; i++){
        // either today has the max profit, or today + previous days maximum
        // working principle: https://medium.com/@rsinghal757/kadanes-algorithm-dynamic-programming-how-and-why-does-it-work-3fd8849ed73d
        localMax = max(history[i], history[i] + localMax);
        if(localMax == history[i])
            start = i;
        if(localMax > overallMax) {
            overallMax = localMax;
            end = i;
        }
    }
    vector<int> result { overallMax, start, end };
    return result;
}

int main(){
    int days;
    cin>>days;
    vector<int> history(days);
    for(int i=0; i<days; i++)
        cin>>history[i];

    vector<int> result = maxProfit(history);
    cout<<"Max profit: "<< result[0];
    cout<<"\n Proposed days to sell "<<result[1]+1<<" to "<<result[2]+1 <<"\n";
    cout<<"Stock market Change Values: ";
    for(int i=result[1]; i<=result[2]; i++)
        cout<<history[i]<<" ";
    return 0;
}

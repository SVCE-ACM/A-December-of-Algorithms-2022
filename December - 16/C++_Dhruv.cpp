#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(auto &x:arr)cin>>x;
    int low =0;
    int high = arr.size()-1;
    int maxi =INT_MIN;
    while(low<high){
        int breath = high-low;
        int height = min(arr[low],arr[high]);
         maxi = max(maxi,breath*height);
        low++;high--;
    }
    cout<<maxi;
}


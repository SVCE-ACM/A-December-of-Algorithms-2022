#include<bits/stdc++.h>
using namespace std;
/* Abhi-Atg */


int main(){

    int n;cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int sum=0;
    int l=1;
    int ansl,ansr;
    ansl=ansr=0;
    int tmp=0;
    for(int i=0;i<n;i++){
        tmp+=arr[i];
        if(tmp<0){
            l=i+2;
            tmp=0;
        }
        if(tmp>sum){
            sum=tmp;
            ansl=l;
            ansr=i+1;
        }
    }

    cout<<"Profit Value: "<<sum<<endl;
    cout<<"Proposed days to sell: Day: "<<ansl<<" to Day: "<<ansr<<endl;
    cout<<"Stock market Change Values: ";
    for(int i=ansl-1;i<ansr;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    return 0;
}
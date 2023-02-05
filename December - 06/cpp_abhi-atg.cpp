#include<bits/stdc++.h>
using namespace std;
/* Abhi-Atg */


int main(){

    int pos;cin>>pos;
    int n=pos;
    vector<int> arr(pos);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int flag=0;
    for(int i=1;i<n;i++){
        if(arr[i]<arr[0]){
            flag=1;
            break;
        }
    }
    if(flag){
        cout<<"Tanika\n";
    }else{
        cout<<"Bob\n";
    }



    return 0;
}
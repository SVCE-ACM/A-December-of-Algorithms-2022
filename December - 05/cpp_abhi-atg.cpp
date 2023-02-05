#include<bits/stdc++.h>
using namespace std;
/* Abhi-Atg */


int main(){

    int n;cin>>n;
    int tmp=62*n+60-24;
    cout<<"Expenditure: "<<tmp<<endl;

    if(tmp<5000){
        cout<<"EXPENDITURE WITHIN LIMIT";
    }else{
        cout<<"EXPENDITURE EXCEEDING LIMIT";
    }




    return 0;
}
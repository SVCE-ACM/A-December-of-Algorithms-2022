#include<iostream>
using namespace std;

int monthlyExpenditure(int &price) {
    int expenditure = 0;
    int todayPrice=0;

    for(int i=1; i<=31; i++){
        todayPrice = price; 
        if(i%3==0) todayPrice+=3;
        if(i%5==0) todayPrice-=2;
        expenditure+=(2*todayPrice);
    }
    if(50000/10<expenditure) cout<<"\nEXPENDITURE EXCEEDING LIMIT\n";
    else cout<<"\nEXPENDITURE WITHIN LIMIT\n";
    return expenditure;
}

int main(){
    int price;
    cin>>price;
    int expenditure = monthlyExpenditure(price);
    cout<<"Expenditure="<<expenditure;
    return 0;
}

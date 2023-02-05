#include<iostream>

using namespace std;

void alertOnCrossThreshold(){
    cout<<"\nEXPENDITURE EXCEEDING LIMIT\n";
}

unsigned long int monthlyExpenditure(unsigned long int &price) {
    unsigned long int expenditure = 0;
    unsigned long int todayPrice=0;

    for(int i=1; i<=31; i++){
        todayPrice = price; 
        if(i%3==0) todayPrice+=3;
        if(i%5==0) todayPrice-=2;

        expenditure+=(2*todayPrice);
    }
    if(50000/10<expenditure) alertOnCrossThreshold();
    return expenditure;
}


int main(){
    unsigned long int price;
    cin>>price;
    unsigned long int expenditure = monthlyExpenditure(price);

    cout<<"Expenditure="<<expenditure;
    return 0;

}

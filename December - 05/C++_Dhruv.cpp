#include <bits/stdc++.h>
using namespace std;

int main() {
    
   int fuel_price;
   cin>>fuel_price;
  int og_income ;
  cin>>og_income;
  int income = og_income/10; // 10% of income
  int expense;
  for(int i=1;i<=31;i++){
      int og_price = fuel_price; 
      if(i%3==0){
          og_price+=3;
          expense+=2*og_price;
      }
      else if(i%5==0){
          og_price-=2;
          expense+=2*og_price;
      }
      else{
           expense+=2*og_price;
      }
  }
  (expense>income)?cout<<"EXPENDITURE EXCEEDING LIMIT":cout<<"EXPENDITURE WITHIN LIMIT";
}

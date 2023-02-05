#include<iostream>
 
using namespace std;

int main(){
	int price,total=0,point3=1,point5=1;

	cout<<"Enter Price on Day1:";
	cin>>price;

	for(int i=1;i<=31;++i){
		if(i==point3+3){
			price+=3;
			point3=i;
		}
		else if(i==point5+5){
			price-=2;
			point5=i;
		}
		total += (2*price);
	}
	if(total>5000)
		cout<<"Exceeded Expenditure:"<<total;
	else
		cout<<"Within Expenditure"<<total;

	return 0;
}
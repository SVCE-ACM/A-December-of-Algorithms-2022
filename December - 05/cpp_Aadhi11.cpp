#include<iostream>
using namespace std;

int main()
{
    int x;
    cout<<"fuel_price=";
    cin>>x;
    int ex;
    ex=((x*2)*17);
    ex=ex+(((x+3)*2)*8);
    ex=ex+(((x-2)*2)*4);
    ex=ex+(((x+1)*2)*2);
    cout<<endl<<"Expenditure="<<ex<<endl<<endl;
    if(ex<5000)
    cout<<"“EXPENDITURE WITHIN LIMIT”";
    else
    cout<<"“EXPENDITURE EXCEEDING LIMIT”";
}



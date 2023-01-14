#include<iostream>
#include <cmath>
#include <iomanip>
using namespace std;
#include<math.h>
int main()
{
  float p,fracNume,fracDeno,f;
  cout<<"Enter the Hydrogen fuel fraction:"<<endl;
  cin>>fracNume>>fracDeno;
  try
  {
      if(fracDeno==0)
      throw 'e';
      else
      p=(fracNume/fracDeno)*100;
  }
  catch(char e)
  {
      cout<<endl<<"Error!";
      exit(0);
  }
  float b = floor(p * 1000.0) / 1000.0;
  cout<<endl<<"Fuel calibration: "<<b<<"%"<<endl;
  f = ((b * 30000) / 100);
  cout<<"Amount of fuel in tank: "<<f<<" L out of 30,000 L"<<endl;
  if(b>=99)
  cout<<"The tank is FULL!";
  if(b<=1)
  cout<<"The tank is EMPTY!!!"<<endl<<"Refill tank.";
  return(0);
}


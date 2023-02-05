#include<iostream>

using namespace std;

int main(){
	float X,Y;
	char Status;
	float fuelCalibration;

	long int capacity =30000;

	while(true){
		char* fraction;
		cout<<"\nEnter fraction: X/Y:";
		cin>>fraction;
  		sscanf(fraction, "%f/%f", &X, &Y);
  		if(X && Y)
  			break;
  		else
  			cout<<"\n Enter again";
	}
	fuelCalibration=(X/Y);
	fuelCalibration*=100;
	if(fuelCalibration<=1){
		Status='E';
		cout<<"\nFuelCalibration: "<<fuelCalibration;
		cout<<"\nStatus: "<<Status<<"\n Tank Empty";
		cout<<"\nAmount of Fuel in Tank: "<<(fuelCalibration*capacity)/100;
		return 0;
	}
	else if(fuelCalibration>=99){
		Status='F';
		cout<<"\nFuelCalibration: "<<fuelCalibration;
		cout<<"\nStatus: "<<Status<<"\nTank Full";
		cout<<"\nAmount of Fuel in Tank: "<<(fuelCalibration*capacity)/100;
		return 0;
	}

	cout<<"\nFuelCalibration: "<<fuelCalibration;
	cout<<"\nAmount of Fuel in Tank: "<<(fuelCalibration*capacity)/100;
	return 0;
}
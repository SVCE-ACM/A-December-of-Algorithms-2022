#include<iostream>
#include<vector>

using namespace std;

int main(){
	int limit,temp;
	cout<<"Enter Limit";
	cin>>limit;

	vector<int> rating;
	vector<int> candies;
	for(int i=0;i<limit;++i){
		cout<<"Enter rating for "<<i<<":";
		cin>>temp;
		rating.push_back(temp);
		candies.push_back(1);
	}

	
	for(int i=1;i<limit;++i)
		if(rating[i-1]<rating[i])
			candies[i]=candies[i-1]+1;
			

	for(int i=limit-2;i>=0;--i)
		if(rating[i]>rating[i+1])
			candies[i]= (candies[i-1]+1)>candies[i]?(candies[i-1]+1):candies[i];
			
	temp=0;
	for (int i=0;i<limit;++i)
		temp+=candies[i];
	cout<<"Candies required : "<<temp;
	return 0;
}
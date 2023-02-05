#include <bits/stdc++.h>
using namespace std;

int main() {
    int days;
    cin>>days;
	vector<int>v(days);
	for(auto& num :v)cin>>num;
	
	
	int max_sum=INT_MIN;
	int curr_sum =0;
	int first_day=0,last_day;
	
	for(int i=0;i<days;i++){
	    
	    curr_sum = curr_sum + v[i];
	    if(curr_sum>max_sum){
	        max_sum = curr_sum;
	        last_day=i;
	    }
	   
	    if(curr_sum<0){
	        curr_sum=0;
	        first_day = i+1;
	    }
	  
	}

	vector<int>alldays;
	for(int i=first_day ;i<=last_day;i++){
	    alldays.push_back(v[i]);
	}
	 cout<<"Max profit: "<<max_sum<<endl;
    cout<<"Proposed days to sell: "<<"Day:"<<++first_day <<" to Day:"<<++last_day <<endl;
	cout<<"Stock market Change Values:"<<" ";
    for(auto i:alldays)cout<<i<<" ";
   
}

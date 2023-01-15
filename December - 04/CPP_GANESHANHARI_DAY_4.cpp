#include <iostream>
#include<vector>
using namespace std;

int main()
 {
 	cout<<"INPUT:"<<endl;
    int days;
    cin>>days;
	vector<int> v(days);
	for(auto& num :v)cin>>num;


	int max=INT_MIN;
	int curr=0;
	int first=0,last;

	for(int i=0;i<days;i++){

	    curr+=v[i];
	    if(curr>max){
	        max=curr;
	        last=i;
	    }

	    if(curr<0){
	        curr=0;
	        first= i+1;
	    }

	}

	vector<int> all;
	for(int i=first;i<=last;i++){
	    all.push_back(v[i]);
	}
	cout<<"OUTPUT:"<<endl;
	 cout<<max<<endl;
    cout<<++first<<" to"<<++last<<endl;
	
    for(int i=0;i<all.size();i++)cout<<all.at(i)<<" ";

}
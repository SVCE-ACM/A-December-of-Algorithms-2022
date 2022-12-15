// C++ program to print largest contiguous array sum

#include <climits>
#include <iostream>
using namespace std;

void maxSubArraySum(int a[], int size)
{
	int max_so_far = INT_MIN, max_ending_here = 0,
		start = 0, end = 0, s = 0;

	for (int i = 0; i < size; i++) {
		max_ending_here += a[i];

		if (max_so_far < max_ending_here) {
			max_so_far = max_ending_here;
			start = s;
			end = i;
		}

		if (max_ending_here < 0) {
			max_ending_here = 0;
			s = i + 1;
		}
	}
	cout << "Profit Value: " << max_so_far << endl;
	cout << "Proposed days to sell: Day: " << start+1 << " to Day: " << end+1 << endl;
	cout<< "Stock market Change Values: ";
	for(int i=start;i<=end;i++){
		cout << a[i] <<" ";
	}
		
}
//5 -4 12 -2 -5 6 -2 -3 1 5 -6 -11 7 -31 9 2 -3 8 -5

int main()
{
	int n;
	cout<<"No. of Days: ";
	cin>>n;
	
	cout<<"Enter stock market change values:"<<endl;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	maxSubArraySum(a, n);
	return 0;
}
//Create by
//Samriddh Prasad

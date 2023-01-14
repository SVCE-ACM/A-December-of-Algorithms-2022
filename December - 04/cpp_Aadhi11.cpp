#include<iostream>
using namespace std;

int
main ()
{
  int n, a[20];
  cout << "No. of days: ";
  cin >> n;
  cout <<endl<< "Given stock market change values: ";
  for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }
  int sum = 0;
  int maxi = a[0];
  int start = 0, end = 0, s = 0;
  for (int i = 0; i < n; i++)
    {
      sum += a[i];
      if (sum > maxi)
	{
	  maxi = sum;
	  start = s;
	  end = i;
	}
      if (sum < 0)
	{
	  sum = 0;
	  s = i + 1;
	}
    }
    cout<<endl;
  cout << "Profit Value: " << maxi << endl;
  cout << "Proposed days to sell: Day: " << start + 1 << " to Day: " << end +
    1 << endl;
  cout << "Stock market Change Values: " << "{";
  for (int i = start; i <= end; i++)
    {
      cout << a[i];
      if (i != end)
	cout << ", ";
    }
  cout << "}";

}



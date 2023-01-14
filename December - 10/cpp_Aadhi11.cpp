#include<iostream>
#include<string.h>
using namespace std;

int
main ()
{
  string s[10];
  int n, a[10], count[10] = { 0 };
  cin >> n;
  for (int i = 0; i < n; i++)
    {
      cin >> a[i];
      cin >> s[i];
    }
  for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < a[i]; j++)
	{
	  if ((s[i][j] == 'a' || s[i][j] == 'e' || s[i][j] == 'i'
	       || s[i][j] == 'o' || s[i][j] == 'u'))
	    {
	      count[i] = 0;
	    }
	  else
	    {
	      count[i]++;
	      if (count[i] == 4)
		break;
	    }
	}
    }
  cout << endl;
  for (int i = 0; i < n; i++)
    {
      if (count[i] == 4)
	cout << "NO" << endl;
      else
	cout << "YES" << endl;
    }
}



#include<iostream>
#include<string.h>
using namespace std;

int
main ()
{
  string s[10], k;
  int n, a[10], max = 0;
  cin >> n;
  for (int i = 0; i < n; i++)
    {
      cin >> s[i];
      a[i] = s[i].length ();
    }
  for (int i = 0; i < n; i++)
    {
      if ((a[i] % 2) != 0)
	{
	  if (a[i] > max)
	    {
	      max = a[i];
	    }
	}
    }
  if (max == 0)
    {
      cout << endl << "Better luck next time";
    }
  else
    {
      for (int i = 0; i < n; i++)
	{
	  if (max == s[i].length ())
	    {
	      cout << endl << s[i];
	      break;
	    }
	}
    }
}



#include<iostream>
#include<string.h>
using namespace std;

int
main ()
{
  string s[10];
  int n, a[10][10];
  cin >> n;
  for (int i = 0; i < n; i++)
    {
      cin >> s[i];
    }
  for (int i = 0; i < n; i++)
    {
      int c = 0;
      for (int j = 0; j < s[i].length (); j++)
	{
	  if (s[i][j] == '-')
	    {
	      a[i][c] = 0;
	      c++;
	    }
	  if (s[i][j] == '#')
	    {
	      a[i][c] = '#';
	      c++;
	    }
	}
    }
  for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
	{
	  if (a[i][j] == '#')
	    {
	      if (a[i + 1][j + 1] != '#')
		a[i + 1][j + 1] = a[i + 1][j + 1] + 1;
	      if (a[i - 1][j - 1] != '#')
		a[i - 1][j - 1] = a[i - 1][j - 1] + 1;
	      if (a[i - 1][j + 1] != '#')
		a[i - 1][j + 1] = a[i - 1][j + 1] + 1;
	      if (a[i + 1][j - 1] != '#')
		a[i + 1][j - 1] = a[i + 1][j - 1] + 1;
	      if (a[i - 1][j] != '#')
		a[i - 1][j] = a[i - 1][j] + 1;
	      if (a[i + 1][j] != '#')
		a[i + 1][j] = a[i + 1][j] + 1;
	      if (a[i][j - 1] != '#')
		a[i][j - 1] = a[i][j - 1] + 1;
	      if (a[i][j + 1] != '#')
		a[i][j + 1] = a[i][j + 1] + 1;
	    }
	}
    }
  for (int i = 0; i < n; i++)
    {
      int c = 0;
      for (int j = 0; j < s[i].length (); j++)
	{
	  if (s[i][j] == '-')
	    {
	      switch (a[i][c])
		{
		case 0:
		    s[i][j] = '0';
		    break;
		case 1:
		  s[i][j] = '1';
		  break;
		case 2:
		  s[i][j] = '2';
		  break;
		case 3:
		  s[i][j] = '3';
		  break;
		case 4:
		  s[i][j] = '4';
		  break;
		case 5:
		  s[i][j] = '5';
		  break;
		case 6:
		  s[i][j] = '6';
		  break;
		case 7:
		  s[i][j] = '7';
		  break;
		case 8:
		  s[i][j] = '8';
		  break;
		}
	      c++;
	    }
	  if (s[i][j] == '#')
	    {
	      c++;
	    }

	}
    }
  cout << endl;
  for (int i = 0; i < n; i++)
    {
      cout << s[i] << endl;
    }

}



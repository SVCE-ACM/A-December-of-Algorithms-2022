#include<iostream>
#include<string.h>
using namespace std;

int main ()
{
  string x;
  cin >> x;
  if ((x.length ()) % 2 == 0)
    {
      for (int i = 0; i < x.length (); i = i + 2)
	{
	  char c;
	  c = x[i];
	  x[i] = x[i + 1];
	  x[i + 1] = c;
	}
    }
  else
    {
      for (int i = 0; i < x.length () - 1; i = i + 2)
	{
	  char c;
	  c = x[i];
	  x[i] = x[i + 1];
	  x[i + 1] = c;
	}
    }
  cout << x;
}




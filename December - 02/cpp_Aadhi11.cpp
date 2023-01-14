#include<iostream>
using namespace std;

int
main ()
{
  string s, a;
  cin >> s;
  int k = s.length ();
  if (s[k - 1] == 'e' && s[k - 2] == 'a')
    {
      a = s[k - 4];
      a = a + s[k - 3];
      for (int i = 0; i < k - 4; i++)
	{
	  a = a + s[i];
	}
      cout <<endl<< a;
    }
}



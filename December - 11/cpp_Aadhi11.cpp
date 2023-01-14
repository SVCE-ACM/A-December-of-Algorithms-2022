#include<iostream>
#include<string.h>
using namespace std;

int
main ()
{
  string s;
  int a[100],b[100], n = 0, score = 0,m=0,l=0;
  cin >> s;
  for (int i = 0; i < s.length (); i++)
    {
      if (s[i] == '_')
	{
	  a[n] = 0;
	  n++;
	}
      if (s[i] == '~')
	{
	  a[n] = 1;
	  n++;
	}
    }
    string k;
    cin>>k;
     for (int i = 0; i < k.length (); i++)
    {
      if(k[i]=='1')
      {
          b[m]=1;
          m++;
      }
      if(k[i]=='2')
      {
          b[m]=2;
          m++;
      }
    }
    for(int i=0;i<m;i++)
    {
        if(a[l]==1)
        break;
        else
        {
        l=l+b[i];
        score++;
        }
    }
  cout << endl << "Score =" << score-1;
}




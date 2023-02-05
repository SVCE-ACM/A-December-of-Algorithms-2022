#include<iostream>
#include<string.h>
using namespace std;

int
main ()
{
  int p, a[10];
  int count = 1;
  string ta = "Tanika", bo = "Bob", x, y;
  cout << "Position=";
  cin >> p;
  cout << "Set of numbers: ";
  for (int i = 0; i < 3; i++)
    {
      cin >> a[i];
    }
  cout << "Player going first: ";
  cin >> x;
  if (x == ta)
    {
      y = bo;
    }
  else
    {
      y = ta;
    }
  while (a[0] > 0)
    {
      int temp;
      a[0] = a[0] - 1;
      temp = a[0];
      a[0] = a[p - 1];
      a[p - 1] = temp;
      count++;
    }
  if (count % 2 == 0)
    {
        cout<<endl;
      cout << x << " wins the game!" << endl;
      cout << y << " loses the game!" << endl;
    }
  else
    {
        cout<<endl;
      cout << y << " wins the game!" << endl;
      cout << x << " loses the game!" << endl;
    }

}




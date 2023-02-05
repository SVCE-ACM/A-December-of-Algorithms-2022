#include <bits/stdc++.h>
using namespace std;
 
void pairsort(string a[], string b[], int n)
{
    pair<string, string> pairt[n];
  
    for (int i = 0; i < n; i++) 
    {
        pairt[i].first = a[i];
        pairt[i].second = b[i];
    }
  
    sort(pairt, pairt + n);
      
    for (int i = 0; i < n; i++) 
    {
        a[i] = pairt[i].first;
        b[i] = pairt[i].second;
    }
}
  
int main()
{
    string b[10]; 
    string a[10]; 
    
      for(int i=0;i<3;i++)
    {
        cin>>b[i];
        cin>>a[i];
    }
    pairsort(a, b, 3);
    cout<<endl;
    for (int i = 0; i < 3; i++)
    {
        if(i!=3-1)
        cout << b[i] << ", ";
        else
        cout << b[i] << ".";
    }
          
    return 0;
}


#include<iostream>
#include<climits>
#include<bits/stdc++.h>
using namespace std;
void delval (int a[100],int n,int key)
        {
            int pos;
            for (int j = 0; j < n; j++)
            {
	            if (a[j] == key)
	            {
	                pos = j;
	            }
            }

	            for (int k = pos; k < n; k++)
	            {
	                a[k] = a[k + 1];
	            }
        }
int main()
{
        int n, a[100],fs,ss,fl,sl;
        float t=0;
            cout << "n=";
            cin >> n;
	            cout <<endl<< "Walking time: ";
	            for (int i = 0; i < n; i++)
	            {
	                cin >> a[i];
	            }


	       while(n>0)
	       {
	           if(n==3||n==2)
	           {
                    if(n==2)
                    {
                        if(a[0]>a[1])
                            t=t+a[0];
                        else
                            t=t+a[1];
                    }
                    else
                    {
                        for(int l=0;l<n;l++)
                        {
                            t = t + a[l];
                        }
                    }
	              n=0;
	           }
	           else
	           {
	                fl = 0;
	                for (int g = 0; g < n; g++)
	                {
                         if (a[g] > fl)
                         {
                            fl = a[g];
                         }
	                }
                    sl = 0;
                    for(int b=0;b<n;b++)
                    {
                        if(a[b]!=fl)
                        {
                            if(a[b]>sl)
                            {
                                sl = a[b];
                            }
                        }
                    }
                    fs=INT_MAX;
                    for (int g = 0; g < n; g++)
                    {
                        if (a[g] < fs)
                        {
                            fs = a[g];
                        }
                    }
                    int ss=INT_MAX;
                    for(int b=0;b<n;b++)
                    {
                        if(a[b]!=fs)
                        {
                            if(a[b]<ss)
                            {
                                ss = a[b];
                            }
                        }
                    }

                    int e=ss+fs+fl+ss;
                    int g=fs+fl+fs+sl;

                    if(g>e)
                    t = t + e;
                    else
                    t = t + g;
                    delval(a,n,fl);
                    delval(a,n,sl);
                     n=n-2;
	           }
	       }
	       t = t/60;
	       t=floor(1000*t)/1000;
        cout<<endl<<t;

}



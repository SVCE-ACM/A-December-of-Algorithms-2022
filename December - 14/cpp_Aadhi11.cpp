#include<iostream>

using namespace std;

int main()
{
    int a[100][100],n,flag=0;
    cin>>n;
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                if(a[i][j]==1)
                flag=1;
            }
            else if(a[i][j]!=a[j][i])
            {
                flag=1;
            }
        }
        if(flag==1)
        break;
    }
    if(flag==1)
    {
        cout<<endl<<"The graph is not Bipartite!";
    }
    else
    {
        cout<<endl<<"The graph is Bipartite!";
    }
}



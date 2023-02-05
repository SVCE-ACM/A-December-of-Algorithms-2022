#include<iostream>
using namespace std;

int main()
{
    int n,a[10][10],b[10],total,s=0,k=1,q=0;
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            a[i][j]=500;
        }
    }
    cin>>n;
    cout<<"Path = ";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    total=a[0][0];
    b[q]=a[0][0];
    q++;
     for(int i=0;i<n;i++)
    {
        for(int j=s;j<n;j++)
        {
            if(a[i+1][j]>a[i][j+1])
            {
                b[q]=a[i][j+1];
                q++;
                total=total+a[i][j+1];
            }
            if(a[i+1][j]<a[i][j+1])
            {
                b[q]=a[i+1][j];
                q++;
                total = total+a[i+1][j];
                s=j;
                break;
            }
        }
    }
        cout<<endl<<"path_taken={";
        for(int i=0;i<q;i++)
        {   
            if(i!=q-1)
            cout<<b[i]<<",";
            else
            cout<<b[i]<<"}";
        }
        cout<<endl<<"The minimum coins dropped is "<<total;
}



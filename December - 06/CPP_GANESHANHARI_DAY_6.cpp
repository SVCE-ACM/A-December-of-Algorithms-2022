#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,pos,player;
    
    cout<<"Enter Position:";
	cin>>pos;
    cout<<"Enter no of terms:";
    cin>>n;
    int arr[n];
    cout<<"Enter the Numbers:";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    
    cout<<"Who starts first 1.Bob 2.Tanika";
	cin>>player;
    int temp=arr[pos-1];
    if(temp==arr[0])
    {
        if(player==1)
        {
            cout<<"Tanika Wins \nBob Loses";
        }
        else
        {
            cout<<"Bob Wins \nTanika Loses";
        }
    }
    else if(temp>arr[0])
    {
        if(player==1)
        {
            cout<<"Tanika Wins \nBob Loses";
        }
        else
        {
            cout<<"Bob Wins \nTanika Loses";
        }
        
    }
    else
    {
       if(player==1)
        {
            cout<<"Bob Wins \nTanika Loses";
        }
        else
        {
            cout<<"Tanika Wins \nBob Loses";
        }
    }
    return 0;
}

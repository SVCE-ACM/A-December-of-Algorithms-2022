#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<vector<int> > vec={{2},{5,4,6},{3},{4},{5},{6}};
    int n = vec.size();
    bool per[10];
    for(int i=0;i<n;i++)
    {
        per[i]=false;
    }
    per[0]=true;
    for (int i = 0; i < vec.size(); i++) {
        for (int j = 0; j < vec[i].size(); j++)
        {
            if(per[i])
            {
                int k;
                k=vec[i][j];
                per[k-1]=true;
            }
        }
    }
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(!per[i])
        count++;
    }
    if(count==0)
    cout<<"Spread";
    else
    cout<<"Nope";
}


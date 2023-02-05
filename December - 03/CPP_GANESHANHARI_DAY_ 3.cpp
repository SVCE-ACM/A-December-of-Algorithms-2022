#include<iostream>
#include<string>
using namespace std;
int main()
{
	
/*	cout<<"INPUT:";
	cin>>n;*/
	int n=5;
	char a[n][n]={{'-', '#', '-', '-', '#'},{'-', '-', '-', '-', '-'}, {'-', '-', '#', '-', '-'},{'-', '#', '-', '-', '#'},{'-', '#', '-', '-', '#'}};
/*for(int i=0;i<n;i++)
{
	for(int j=0;j<n;j++)
	{
		cin>>a[i][j];
	
	}
	
}*/

int xdir[8]={0,0,-1,-1,-1,1,1};
int ydir[8]={-1,1,-1,0,1,-1,0,1};
int xpos,ypos;
cout<<"OUTPUT:"<<endl;
for(int i=0;i<n;i++)
{
	for(int j=0;j<n;j++)
	{
		if(a[i][j]!='#') 
		{
			for(int k=0;k<8;k++)
			{
				xpos=i+xdir[k];
				ypos=j+ydir[k];
				if(xpos>=n||xpos<0) break;
				if(a[xpos][ypos]=='#') 
				{
					if(a[i][j]=='-') a[i][j]='1';
					else a[i][j]=(char)((int)(a[i][j])+1);
				}
			}
		}
	
		if(a[i][j]=='-'&&a[i][j]!='#') a[i][j]='0';
		
		cout<<a[i][j]<<"\t";
	}
	cout<<endl;
}








return 0;
}
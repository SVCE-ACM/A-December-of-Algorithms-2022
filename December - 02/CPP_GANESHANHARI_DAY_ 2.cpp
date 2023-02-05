/*
Leonard and Sheldon are the best of friends. They know each other so well that they even developed their own language to exchange secret messages. However, they have recently made a new friend, Raj, who has difficulty understanding the two when they communicate in their language.

Leonard and Sheldon’s language is similar to Pig Latin. Their unique language consists of usual English words transformed by shifting the first two letters in a word to the end and adding a suffix 'ae'.

Help Raj translate and decode his friends' secret messages.

   
   Input: kipediawiae

   Output: wikipedia





*/




#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char a[1000];
	cout<<"INPUT:";
	cin>>a;
	
	int n=strlen(a);
	int m=n-2;
	char c[m];
	
	for(int i=0;i<n-4;i++)
	{
		c[i+2]=a[i];
			
	}
	c[0]=a[n-4];
	c[1]=a[n-3];
	cout<<endl<<"OUTPUT:"<<c;
	
	return 0;
	
}
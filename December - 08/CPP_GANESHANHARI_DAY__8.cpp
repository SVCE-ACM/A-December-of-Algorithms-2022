
#include <iostream>
#include<string.h>
using namespace std;
int main() {
	cout<<"INPUT:"<<endl;
    char str1[100];
    cin>>str1;
    for(int i=0;i<strlen(str1);i=i+2)
    {
        if(i+1<strlen(str1))
        {
        char temp=str1[i+1];
        str1[i+1]=str1[i];
        str1[i]=temp;
        }
        
    }
    cout<<"OUTPUT:"<<endl;
cout<<str1;
    return 0;
}
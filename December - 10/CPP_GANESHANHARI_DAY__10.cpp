
#include <iostream>
#include<string.h>

using namespace std;
bool isvowel(char ch) 
{ 
int res= (ch == 'a') || (ch == 'e') ||(ch == 'i') ||(ch == 'o') ||(ch == 'u');
return (!res);
}
int main() {
    int casen;
    cout<<"input:"<<endl;
    
    cin>>casen;
    char word[casen][100];
    int len[casen];
    int t=casen;
    while(t>0)
    {
        cin>>len[t];
        cout<<endl;
        cin>>word[t];
        cout<<endl;
        t--;
    }
    cout<<"output:"<<endl;
    while(casen>0)
    {
        
        
        int ch=0;
        int i;
        
        for(i=0;i<len[casen]-3&&ch==0;i++)
        {
if((isvowel(word[casen][i])&&isvowel(word[casen][i+1])&&isvowel(word[casen][i+2])&&isvowel(word[casen][i+3])))
            {
                
                cout<<endl<<"NO";
                goto loop;
            }
        }
        cout<<endl<<"YES";
        loop:
        casen--;
    }
    return 0;
}
#include<iostream> 
#include<cstring> 
#include<bits/stdc++.h>

#define MAX 256 
using namespace std; 
  
bool compare(char arr1[], char arr2[]) 
{ 
    for (int i=0; i<MAX; i++) 
        if (arr1[i] != arr2[i]) 
            return false; 
    return true; 
} 
  
int search(char *pat, char *txt) 
{ 
    int M = strlen(pat), N = strlen(txt); 
  
    char countP[MAX] = {0}, countTW[MAX] = {0}; 
    for (int i = 0; i < M; i++) 
    { 
        (countP[pat[i]])++; 
        (countTW[txt[i]])++; 
    } 
  
    for (int i = M; i < N; i++) 
    { 
        if (compare(countP, countTW)) 
            return i-M;

        (countTW[txt[i]])++; 
  
        countTW[txt[i-M]]--; 
    } 
  
    if (compare(countP, countTW)) 
        return N-M;
        
        return -1;
} 
  
/* Driver program to test above function */
int main() 
{ 
    string t; 
    string p;
    cout<<"String 1:"<<endl;
    getline(cin,t);
    cout<<endl<<"String 2:"<<endl;
    getline(cin,p);

    
    for (int i = 0, len = t.size(); i < len; i++)
    {
        if (ispunct(t[i]))
        {
            t.erase(i--, 1);
            len = t.size();
        }
    }
    transform(t.begin(), t.end(), t.begin(), ::tolower);
    t.erase(remove(t.begin(), t.end(), ' '), t.end());

    char txt[t.length()];
    txt[t.length()]='\0';
    for(int i=0;i<t.length();i++)
    {
        txt[i]=t[i];
    }
    transform(p.begin(), p.end(), p.begin(), ::tolower);
    p.erase(remove(p.begin(), p.end(), ' '), p.end());

    char pat[p.length()];
    pat[p.length()]='\0';
    for(int i=0;i<p.length();i++)
    {
        pat[i]=p[i];
    }
    
    int k = search(pat, txt); 
    if(k==-1)
    {
        exit(0);
    }
    cout<<endl<<"'";
    for(int i=k;i<p.length()+k;i++)
    {
        cout<<t[i];
    }    
    cout<<"'";
    return 0; 
} 

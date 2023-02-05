#include<iostream>
#include<string.h>
 using namespace std;
 
 int main()
 {
     string s1,s2;
     int a[100],b[100],h=0;
     cin>>s1;
     int k=s1.length();
     for(int i=0;i<k;i++)
     {
        int c=s1[i];
        switch(c)
        {
            case 'A':
                    a[i] = 0;
                    break;
            case 'B':
                    a[i] = 1;
                    break;
             case 'C':
                    a[i] = 2;
                    break;
             case 'D':
                    a[i] = 3;
                    break;
             case 'E':
                    a[i] = 4;
                    break;
             case 'F':
                    a[i] = 5;
                    break;
             case 'G':
                    a[i] = 6;
                    break;
             case 'H':
                    a[i] = 7;
                    break;
             case 'I':
                    a[i] = 8;
                    break;
             case 'J':
                    a[i] = 9;
                    break;
             case 'K':
                    a[i] = 10;
                    break;
             case 'L':
                    a[i] = 11;
                    break;
             case 'M':
                    a[i] = 12;
                    break;
             case 'N':
                    a[i] = 13;
                    break;
             case 'O':
                    a[i] = 14;
                    break;
             case 'P':
                    a[i] = 15;
                    break;
             case 'Q':
                    a[i] = 16;
                    break;
             case 'R':
                    a[i] = 17;
                    break;
             case 'S':
                    a[i] = 18;
                    break;
             case 'T':
                    a[i] = 19;
                    break;
             case 'U':
                    a[i] = 20;
                    break;
             case 'V':
                    a[i] = 21;
                    break;
             case 'W':
                    a[i] = 22;
                    break;
             case 'X':
                    a[i] = 23;
                    break;
             case 'Y':
                    a[i] = 24;
                    break;
             case 'Z':
                    a[i] = 25;
                    break;
        }
     }
    char c[100];
    cin>>s2;
    int p=s2.length();
    cout<<endl;
    for(int i=0;i<p;i++)
    {
        int c=s2[i];
        switch(c)
        {
            case 'A':
                    b[i] = 65;
                    break;
            case 'B':
                    b[i] = 66;
                    break;
             case 'C':
                    b[i] = 67;
                    break;
             case 'D':
                    b[i] = 68;
                    break;
             case 'E':
                    b[i] = 69;
                    break;
             case 'F':
                    b[i] = 70;
                    break;
             case 'G':
                    b[i] = 71;
                    break;
             case 'H':
                    b[i] = 72;
                    break;
             case 'I':
                    b[i] = 73;
                    break;
             case 'J':
                    b[i] = 74;
                    break;
             case 'K':
                    b[i] = 75;
                    break;
             case 'L':
                    b[i] = 76;
                    break;
             case 'M':
                    b[i] = 77;
                    break;
             case 'N':
                    b[i] = 78;
                    break;
             case 'O':
                    b[i] = 79;
                    break;
             case 'P':
                    b[i] = 80;
                    break;
             case 'Q':
                    b[i] = 81;
                    break;
             case 'R':
                    b[i] = 82;
                    break;
             case 'S':
                    b[i] = 83;
                    break;
             case 'T':
                    b[i] = 84;
                    break;
             case 'U':
                    b[i] = 85;
                    break;
             case 'V':
                    b[i] = 86;
                    break;
             case 'W':
                    b[i] = 87;
                    break;
             case 'X':
                    b[i] = 88;
                    break;
             case 'Y':
                    b[i] = 89;
                    break;
             case 'Z':
                    b[i] = 90;
                    break;
        }
    }
    for(int i=0;i<p;i++)
    {
        int q;
        if(h<k)
        {
            q = b[i]+a[h];
            h++;
        }
        else
        {
            h=0;
            q = b[i]+a[h];
            h++;
        }
        if(q>90)
        {
            q = q-26;
        }
        c[i]=q;
    }
    for(int i=0;i<p;i++)
    {
        cout<<c[i];
    }
     
 }


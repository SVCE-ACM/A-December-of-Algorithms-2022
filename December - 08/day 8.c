
#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char in[1000],t;
    printf("Input: ");
    scanf("%s",in);
    for(i=1;i<strlen(in);i=i+2)
    {
        t=in[i];
        in[i]=in[i-1];
        in[i-1]=t;
    }
    printf("Output: %s",in);

    return 0;
}
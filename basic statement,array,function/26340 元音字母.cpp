#include <iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int vowel(char a[],char b[])
{
    int i=0,j=0;
    while(a[i]!=0)

    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||
           a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
        {
               b[j]=a[i];
               j++;
           }
           i++;
    }
}
int main()
{
    char a[100];
    gets(a);
    char b[100]={0};
    vowel(a,b);
    puts(b);
    return 0;
}

#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;
void copy(char s1[100],char s2[100])
{
    int i,j;
    int len1 = strlen(s1);
    i = 0,j = 0;
    while(i< len1){
        if(s1[i] == 'a' ||
           s1[i] == 'e' ||
           s1[i] == 'i' ||
           s1[i] == 'o' ||
           s1[i] == 'u' ||
           s1[i] == 'A' ||
           s1[i] == 'E' ||
           s1[i] == 'I' ||
           s1[i] == 'O' ||
           s1[i] == 'U'){
                s2[j] = s1[i];
                i++;
                j++;
           }
        else i++;
    }
    s2[j] = '\0';
}
int main()
{
    char a[100],b[100];
    gets(a);
    copy(a,b);
    puts(b);
    return 0;
}

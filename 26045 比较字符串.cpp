#include <iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    char str1[100];
    char str2[100];
    gets(str1);
    gets(str2);
    int i=0;
    int resu;
    while((str1[i]==str2[i])&&(str1[i]!='\0')) i++;
if(str1=='\0'&&str2[i]=='\0') resu=0;
else
resu=str1[i]-str2[i];
printf("%d\n",resu);

}

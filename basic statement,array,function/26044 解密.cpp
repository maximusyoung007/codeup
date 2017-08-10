#include <iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    char str[100];

    gets(str);
    int len=strlen(str);
    for(int i=0;i<=len+1;i++)
    {
    if (str[i]>='A'&&str[i]<='Z')
    {
         str[i]='A'+(25-(str[i]-'A'));

    }
    else if(str[i]>='a'&&str[i]<='z')
    {
        str[i]='a'+(25-(str[i]-'a'));

    }


    }
    puts(str);
    return 0;
}

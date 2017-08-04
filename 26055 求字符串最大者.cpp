#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int main()
{
    char str1[100];
    char str2[100];
    char str3[100];
    char max_in_two[100];
    char max_in_three[100];
    gets(str1);
    gets(str2);
    gets(str3);
    int n=strcmp(str1,str2);
    int m;
    if(n>=0)
    {
        strcpy(max_in_two,str1);
         m=strcmp(max_in_two,str3);

    }
    else if(n<0) {
            strcpy(max_in_two,str2);
            m=strcmp(max_in_two,str3);
    }
    if(m>=0)
    {
        strcpy(max_in_three,max_in_two);

    }
    else if(m<0)
    {
        strcpy(max_in_three,max_in_two);
    }
    puts(max_in_three);
    return 0;

}

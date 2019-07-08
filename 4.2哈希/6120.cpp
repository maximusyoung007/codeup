#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;
int main()
{
    char s1[11000],s2[11000];
    gets(s1);
    gets(s2);
    int i,j;
    for(i = 0;i < strlen(s1);i++)
    {
        for(j = 0;j < strlen(s2);j++)
        {
            if(s1[i] == s2[j])
                break;
        }
        if(j == strlen(s2))
            cout << s1[i];
    }
    return 0;
}

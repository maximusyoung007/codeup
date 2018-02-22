#include <cstdio>
#include<string.h>
#include<algorithm>
using namespace std;
bool cmp(char s1,char s2)
{
    return s1 < s2;
}
int main()
{
    char str[200];
    int len = 0;
    int i;
    while(gets(str))
    {
        len = strlen(str);
        sort(str,str + len,cmp);
        for(i = 0;i < len;i++){
            printf("%c",str[i]);
        }
        printf("\n");
    }
}

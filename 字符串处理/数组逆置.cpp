#include<cstdio>
#include<string.h>
int main()
{
    char s[201];
    while(gets(s)){
            int len = strlen(s);
            int i;
            char temp;
            for(i = 0;i < len;i++)
            {
                printf("%c",s[len - i - 1]);
            }
            printf("\n");
        }
}


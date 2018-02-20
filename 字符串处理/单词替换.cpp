#include <cstdio>
#include <string.h>
int main()
{
    char a[101],b[101],c[101],tmp[101];
    int i,j;
    while(gets(a)){
        gets(b);
        gets(c);
        int len = strlen(a);
        for(i = j = 0;i <= len;i++)
        {
            if(a[i] != ' ' && a[i] != '\0'){
                tmp[j++] = a[i];
            }
            else if(a[i] == ' '){
                tmp[j] = '\0';
                if(strcmp(b,tmp) == 0)printf("%s ",c);
                else printf("%s ",tmp);
                j = 0;//prepare for next word
            }
            else if(a[i] == '\0'){
                tmp[j] = '\0';
                if(strcmp(b,tmp) == 0)printf("%s\n",c);
                else printf("%s\n",tmp);
            }
        }
    }
    return 0;
}

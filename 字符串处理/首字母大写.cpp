#include<stdio.h>
#include<string.h>
int main()
{
    int i,l1;
    char s1[111];
    while(gets(s1))
    {

        l1=strlen(s1);
        for(i=0;i<=l1;++i)
        {
            if(i == 0 && s1[i] >= 'a' && s1[i] <= 'z'){
                s1[i] = 'A' + (s1[i] - 'a');
            }
            if((s1[i-1]==' '||s1[i-1]=='\t'||s1[i-1]=='\n'||s1[i-1]=='\r')&&s1[i]>='a'&&s1[i]<='z')
            {
                s1[i]='A'+(s1[i]-'a');
            }
        }
        puts(s1);
    }
    return 0;
}

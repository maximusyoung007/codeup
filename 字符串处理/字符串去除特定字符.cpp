#include<cstdio>
#include<string.h>
int main()
{
    char c;
    char s[1000];
    int i,j;
    while(gets(s)){
        int len = strlen(s);
        scanf("%c",&c);
        for(i = 0;i < len;i++){
            if(s[i] == c)continue;
            else if(s[i] != c)printf("%c",s[i]);
        }
        printf("\n");
        getchar();//delete line break after each input
    }
}

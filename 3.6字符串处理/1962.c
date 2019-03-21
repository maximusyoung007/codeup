#include<stdio.h>
#include<string.h>
int main()
{
    char s[10000],a[110],b[110],temp[1000][110];//将每一个单词存入二维数组
    while(gets(s)){
        int m = 0,n = 0;
        memset(temp,0,sizeof(temp));
        gets(a);
        gets(b);
        for(int i = 0;i < strlen(s);i++){
            if (s[i] != ' '){
                temp[m][n++] = s[i];
            }
            else{
                m++;
                n = 0;
            }
        }
        for(int i = 0;i <= m;i++){
            if (strcmp(temp[i],a) == 0)
                printf("%s ",b);
            else
                printf("%s ",temp[i]); //二维数组
        }
        printf("\n");
    }
    return 0;
}



#include<cstdio>
#include <string.h>
#define MAXSIZE 100
int main()
{
    int len,side,mid;
    int i,j;
    char str[MAXSIZE];
    gets(str);
    len = strlen(str);
    side = (len + 2) / 3;
    mid = len - side * 2;
    for(i = 0;i < side -1;i++){
        printf("%c",str[i]);
        for(j = 0;j < mid;j++){
            printf(" ");
        }
        printf("%c\n",str[len - i - 1]);
    }
    for(i = 0;i < 2 + mid;i++){
        printf("%c",str[side + i - 1]);
    }
    return 0;
}

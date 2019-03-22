#include<stdio.h>
int main()
{
    char str[11000],c;
    while(gets(str)){
        scanf("%c",&c);
        for(int i = 0;str[i] != '\0';i++)
            if(str[i] != c)
                printf("%c",str[i]);
        printf("\n");
        getchar();//清除缓冲区
    }
    return 0;
}

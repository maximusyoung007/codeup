/*
    第二种方法是CSDN上看到的，可以说非常简洁了。

    作者：子夜葵
    来源：CSDN
    原文：https://blog.csdn.net/lzyws739307453/article/details/79616525
*/
#include<stdio.h>
int main()
{
    char a[100];
    int i,j,s,m,n,d;
    while(scanf("%d %s %d",&m,a,&n) != EOF)
    {
        s = 0;
        for(i = 0;a[i];i++)
        {
            if(a[i] >= 'a' && a[i] <= 'f')
                a[i] -= 'a' - 10;
            else if(a[i] >= 'A' && a[i] <= 'F')
                a[i] -= 'A' - 10;
            else a[i] -= '0';
            s = s * m + a[i];
        }
        j = 0;
        while(s)
        {
            a[j++] = "0123456789ABCDEF"[s%n];
            s /= n;
        }
        if(!j)
            printf("0");
        else
            for(i = j - 1;i >= 0;i--)
                printf("%c",a[i]);
        printf("\n");
    }
    return 0;
}

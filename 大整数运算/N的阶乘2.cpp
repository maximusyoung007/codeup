#include<stdio.h>
#include<string.h>
const int maxn = 3000;
int f[maxn];
int main()
{
    int i, j, n, len, num;
    while(scanf("%d", &n) != EOF)
    {
        len = 1;
        memset(f, 0, sizeof(f));
        f[0] = 1;
        int c = 0;                         //c表示进位
        for(i = 2; i <= n; i++)      //乘以i
        {
            for(j = 0; j < len; j++)
            {
                num = f[j]*i + c;
                f[j] = num % 10;
                c = num/10;
            }
            for(;c != 0; c /= 10)
            f[len++] = c%10;
        }
        for(j = maxn-1; j >= 0; j--)
            if(f[j]) break;
        for(i = j; i >= 0; i--)
            printf("%d", f[i]);
        printf("\n");
    }
    return 0;
}

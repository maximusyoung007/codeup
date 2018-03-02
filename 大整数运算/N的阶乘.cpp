#include<cstdio>
#include<string.h>
#define maxn 3000
int f[maxn];
int main()
{
    int i,j,n,len,result;
    while(scanf("%d",&n) != EOF){
        len = 1;
        memset(f,0,sizeof(0));
        f[0] = 1;
        int carry = 0;
        for(i = 2;i <= n;i++){
            for(j = 0;j < len;j++){
                result = f[j] * i + carry;
                f[j] = result % 10;
                carry = result / 10;
            }
            while(carry != 0){
                f[len++] = carry % 10;
                carry /= 10;
            }
        }
        for(int i = 0;i < len;i++)
            printf("%d",f[len - 1 - i]);
        printf("\n");
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int f1 = 1,f2 = 1;
    int n,f;
    scanf("%d",&n);
    for(int i = 3;i <= n;i++){
        f = f1 + f2;
        f1 = f2;
        f2 = f;
    }
    printf("%d\n",f);
    return 0;
}

#include<cstdio>
int main()
{
    int n;
    while(scanf("%d",&n) != EOF){
         int result[40],num = 0;
    do{
        result[num++] = n % 8;
        n = n / 8;
    }while(n != 0);
    for(int i = num - 1;i >= 0;i--)
    {
        printf("%d",result[i]);
    }
    }
    return 0;
}

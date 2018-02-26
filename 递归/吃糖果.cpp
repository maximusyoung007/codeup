#include<cstdio>
int candy(int n)
{
    if(n == 1)return 1;
    else if(n == 2)return 2;
    else if(n >= 3)return candy(n - 1) + candy(n - 2);
}
int main()
{
    int n;
    while(scanf("%d",&n) != EOF){
        printf("%d\n",candy(n));
    }
}

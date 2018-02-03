#include<cstdio>
int main()
{
    int T;
    long long a,b,c;
    scanf("%d",&T);
    for(int i = 1;i <= T;i++){
        scanf("%lld%lld%lld",&a,&b,&c);
        if(a + b > c)
            printf("Case #%d: true\n",i);
        else
            printf("Case #%d: false\n",i);
    }
}

#include<cstdio>

 void change(long long s,long long m)
 {
    if(s)
    {
        change(s / m,m);
        printf("%lld",s%m);// first output
    }
 }
 int main()
 {
    long long a,b,m,s;
    while(scanf("%lld",&m),m)
    {
        scanf("%lld%lld",&a,&b);
        s = a + b;
        if(s == 0)
            printf("0");
        else
            change(s,m);//使用递归输出
            printf("\n");
    }
    return 0;
 }

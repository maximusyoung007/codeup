#include<cstdio>
long decimal(long x,long p)//p½øÖÆÊýx
{
    long y = 0;//y is used to saved decimal number
    long product = 1;
    while(x != 0){
        y = y + (x % 10) * product;
        x = x / 10;
        product = product * p;
    }
        return y;
}
void change(long sum,long d)
{
    long ans[31],num = 0;
    do{
        ans[num++] = sum % d;
        sum /= d;
    }while(sum != 0);
    for(long i = num - 1;i >= 0;i--){
        if(ans[i] >= 1 && ans[i] <= 9)printf("%d",ans[i]);
        else if(ans[i] == 10)printf("A");
        else if(ans[i] == 11)printf("B");
        else if(ans[i] == 12)printf("C");
        else if(ans[i] == 13)printf("D");
        else if(ans[i] == 14)printf("E");
        else if(ans[i] == 15)printf("F");
    }
}
main()
{
    long a,b;
    long m;
    while(scanf("%d%d%d",&a,&m,&b) != EOF){
        long y = decimal(m,a);
        //printf("%d\n",y);
        change(y,b);
    }
    return 0;
}

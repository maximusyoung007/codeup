#include<stdio.h>
int main()
{
    long n,i;
    double sum;
    while(scanf("%ld",&n),n!=0)
    {
        sum = 0;
        for(i = 2;i <= n;i++)
            sum += 1.0 / i * (n - i + 1);
            sum = sum * 2 + n;
    printf("%.2lf\n",sum);
    }
    return 0;
}

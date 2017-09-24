#include <cstdio>
main()
{
    int n,a,sum;
    while(scanf("%d",&n)&&n)
    {
        sum=0;
        while(n--)
        {
            scanf("%d",&a);
            sum+=a;
        }
        printf("%d\n",sum);
    }
    return 0;
}

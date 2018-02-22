#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j,flag;
    while(scanf("%d",&n) != EOF)
    {
        for(flag = 0,i = 2;i < n;i++)
        {
            for(j = 2;j <= sqrt(i);j++)
                if(i % j == 0)
                break;
                if(j > sqrt(i)&&i % 10 == 1)
                {
                    printf("%d ",i);
                    flag = 1;
                }
        }
            if(!flag)
                printf("-1");
            puts(" ");
    }
    return 0;
}

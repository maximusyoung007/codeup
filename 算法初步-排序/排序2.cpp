#include<stdio.h>
int main()
{
    int n,i,j,t,a[100];
    while(scanf("%d",&n) != EOF)
    {
        for(i = 0;i < n;i++)
        scanf("%d",&a[i]);
        for(i = 0;i < n-1;i++)
            for(j = i + 1;j < n;j++)
                if(a[i] > a[j])
                {
                    t = a[i];
                    a[i] = a[j];
                    a[j] = t;
                }
        for(i = 0;i < n;i++)
            printf("%d ",a[i]);
        puts("");
    }
    return 0;
}

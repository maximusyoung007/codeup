#include<cstdio>
int main()
{
    int n,i,j,t,a[1001];
    int one;
    while(scanf("%d",&n) != EOF)
    {
        if(n == 1){
            scanf("%d",&one);
            printf("%d\n",one);
            printf("-1");
        }
        else{
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
            printf("%d\n",a[n - 1]);
            for(j = 0;j < n - 1;j++)
                printf("%d ",a[j]);
            printf("\n");
        }
    }
    return 0;
}

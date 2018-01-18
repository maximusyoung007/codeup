#include <cstdio>

int run();
int l,m;
int main()
{

    scanf("%d%d",&l,&m);
    while(l != 0)
    {
        printf("%d\n",run());
        l = 0;
        scanf("%d%d",&l,&m);
    }
    return 0;
}
int run()
{

    int a[11111],i,j,k,h,t=0;
    for(i=0;i<=l;i++)
        a[i]=1;
    for(i=1;i<=m;i++)
    {
        scanf("%d%d",&j,&k);
        for(h=j;h<=k;h++)
            a[h]=0;
    }
    for(i=0;i<=l;i++)
        t+=a[i];
    return t;
 }

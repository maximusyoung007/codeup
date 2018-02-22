#include<stdio.h>
int main()
{
    int a[11];
    int i,j,m,t,h;
    while(scanf("%d",&m)!=EOF)
    {
        h=0;
        for(i=0;i<9;i++)
            scanf("%d",&a[i]);
            a[9]=m;
        for(j=0;j<9;j++)
        {
            for(i=0;i<9-j;i++)
            {
                if(a[i]>a[i+1])
                {
                    t=a[i];
                    a[i]=a[i+1];
                    a[i+1]=t;
                }
            }
        }
        for(i=9;i>=0;i--)
        {
            if(a[i]%2!=0)
            {
                printf("%d ",a[i]);
                h++;
            }
        }
        for(i=0;i<10;i++)
        {
            if(a[i]%2==0)
            {
                h++;
                if(h<=9)
                printf("%d ",a[i]);
                else
                printf("%d",a[i]);
            }
        }
        printf("\n");
    }
    return 0;
 }

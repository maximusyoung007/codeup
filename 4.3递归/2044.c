#include<stdio.h>
#include<string.h>
int a[30];
int count(int w,int k)
{
    if(w == 0)
        return 1;
    if(k <= 0)
        return 0;
    return count(w,k-1) + count(w-a[k],k-1);
}
int main()
{
    int n;
    while(scanf("%d",&n) != EOF){
        for(int i = 1;i <= n;i++){
            scanf("%d",&a[i]);
        }
        printf("%d\n",count(40,n));
        memset(a,0,sizeof(a));
    }
    return 0;
}

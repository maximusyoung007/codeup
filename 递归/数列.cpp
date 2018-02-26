#include <iostream>
#include<cstdio>
using namespace std;
int fun(int n)
{
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return fun(n-1)+fun(n-2);
}
int main()
{
    int n;
    int m;
    scanf("%d",&m);
        while(m--){
                scanf("%d",&n);
             if(n==0)
            break;
        for(int i=0;i<n;++i)
        {
            for(int j=0;j<(2*n-1)-(2*i+1);++j)
                printf(" ");
            for(int k=0;k<2*i+1;++k)
                printf("%d ",fun(k));
            printf("\n");
        }
    }
    return 0;
}



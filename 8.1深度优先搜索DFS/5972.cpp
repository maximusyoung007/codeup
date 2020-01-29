#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
int n,a[110];
bool v[110];
void dfs(int k)
{
    int i;
    if(k == n+1)
    {
        for(i = 1;i < n;i++)
        {
            printf("%d ",a[i]);
        }
        printf("%d\n",a[n]);
    }
    else
    {
        for(i = 1;i <= n;i++)
           if( v[i])
           {
              v[i] = 0;
              a[k] = i;
              dfs(k + 1);
              v[i] = 1;
           }
    }
}
int main()
{
    scanf("%d",&n);
    memset(v,1,sizeof(v));
    dfs(1);
    return 0;
}

#include<cstdio>
#include<iostream>
#include<math.h>
int k,num,n,a[30];
bool is_prime(int n)
{
    if(n <= 1)
        return false;
    int sqr = (int)sqrt(1.0 * n);
    for(int i = 2;i <= sqr;i++){
        if(n % i == 0)
            return false;
    }
    return true;
}
void dfs(int index,int nowK,int sum)
{
    if(nowK == k){
        if(is_prime(sum))
            num++;
        return;
    }
    if(index == n || nowK > k)return;
    dfs(index + 1,nowK,sum);
    if(nowK + 1 <= k){
        dfs(index+1,nowK + 1,sum + a[index]);
    }
}
int main()
{
    scanf("%d %d",&n,&k);
    num = 0;
    for(int i = 0;i < n;i++){
        scanf("%d",&a[i]);
    }
    dfs(0,0,0);
    printf("%d\n",num);

    return 0;
}

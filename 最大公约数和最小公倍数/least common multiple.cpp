#include<cstdio>
int gcd(int a,int b)
{
    return !b ? a : gcd(b,a % b);
}
int lcm(int a,int b)
{
    return (a / gcd(a,b)) * b;
}
int main()
{
    int n,m;
    long long a[100];
    while(scanf("%d",&n) != EOF){
        while(n--){
            scanf("%d",&m);
            for(int i = 0;i < m;i++){
                scanf("%d",&a[i]);
            }
            int result = a[0];
            for(int i = 1;i < m;i++){
                result = lcm(result,a[i]);
            }
            printf("%d\n",result);
        }
    }
}

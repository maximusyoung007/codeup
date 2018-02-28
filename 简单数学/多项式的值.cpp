#include<cstdio>
int fun(int i,int x)
{
    int product = 1;
    while(i > 0){
        product *= x;
        i--;
    }
    return product;
}
int main()
{
    int m,n,co[12],x;
    int i;
    while(scanf("%d",&m) != EOF){
        while(m--){
            int sum = 0;
            scanf("%d",&n);
            for(i = 0;i < n + 1;i++){
                scanf("%d",&co[i]);
            }
            scanf("%d",&x);
            for(i = 0;i < n + 1;i++){
                sum += co[i]*fun(i,x);
            }
        printf("%d\n",sum);
        }
    }
}

#include<cstdio>
int main()
{
    int n,m;
    while(scanf("%d",&n) != EOF){
        int sum = 0;
        for(int i = 0;i < n;i++){
            scanf("%d",&m);
            sum += m;
        }
        printf("%d\n",sum);
    }
    return 0;
}

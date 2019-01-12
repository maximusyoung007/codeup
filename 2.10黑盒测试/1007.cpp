#include<cstdio>
int main()
{
    int m,n,k;
    scanf("%d",&n);
    for(int i = 0;i < n;i++){
        scanf("%d",&m);
        int sum = 0;
        for(int j = 0;j < m;j++){
            scanf("%d",&k);
            sum += k;
        }
        printf("%d\n",sum);
        printf("\n");
    }
    return 0;
}

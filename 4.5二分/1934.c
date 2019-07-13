#include<stdio.h>
#include<string.h>
int a[210];
int main()
{
    int n;
    while(scanf("%d",&n) != EOF){
        for(int i = 0;i < n;i++){
            scanf("%d",&a[i]);
        }
        int x;
        scanf("%d",&x);
        int j;
        for(j = 0;j < n;j++){
            if(a[j] == x){
                printf("%d\n",j);
                break;
            }
        }
        if(j == n){
            printf("-1\n");
        }
        memset(a,0,sizeof(a));
    }
    return 0;
}

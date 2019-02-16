#include<cstdio>
int main()
{
    int n;
    while(scanf("%d",&n) != EOF){
        int a[210];
        for(int i = 0;i < n;i++){
            int value;
            scanf("%d",&value);
            a[i] = value;
        }
        int m;
        bool exist = false;
        scanf("%d",&m);
        for(int j = 0;j < n;j++){
            if(a[j] == m){
                printf("%d\n",j);
                exist = true;
                break;
            }
        }
        if(exist == false)
            printf("-1\n");
    }
    return 0;
}

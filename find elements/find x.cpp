#include<cstdio>
#define MAX 201
int main()
{
    int n;
    int a[MAX];
    int elements;
    while(scanf("%d",&n) != EOF){
        for(int i = 0;i < n;i++){
            scanf("%d",&elements);
            a[i] = elements;
        }
        int x;
        scanf("%d",&x);
        int j;
        for(j =0;j < n;j++){
            if(a[j] == x){
                printf("%d\n",j);
                break;
            }
        }
        if(j == n)
            printf("-1\n");
    }
    return 0;
}

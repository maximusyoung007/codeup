#include<cstdio>
#define MAX 1000
int main()
{
    int n,score,the_score;
    int a[MAX];
    while(scanf("%d",&n) != EOF){
        int count = 0;
        if(n == 0)break;
        for(int i = 0;i < n;i++){
            scanf("%d",&score);
            a[i] = score;
        }
        scanf("%d",&
              the_score);
        for(int j = 0;j < n;j++){
            if(a[j] == the_score)
                count++;
        }
        printf("%d\n",count);
    }

}

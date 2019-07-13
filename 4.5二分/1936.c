#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    while(scanf("%d",&n) != EOF){
        while(n--){
            int k;
            scanf("%d",&k);
            int a[k],result[k];
            for(int i = 0;i < k;i++){
                scanf("%d",&a[i]);
            }
            /*for(int i = 0;i < k;i++){
                printf("%d",a[i]);
            }*/
            int j,m = 0;
            for(j = 0;j < k;j++){
                if(j == 0 && a[j] != a[j+1]){
                    result[m++] = j;
                    continue;
                }
                if((a[j] > a[j+1] && a[j] > a[j-1]) || (a[j] < a[j-1] && a[j] < a[j+1])){
                    result[m++] = j;
                    continue;
                }
                if(j == k - 1 && a[j] != a[j-1]){
                    result[m++] = j;
                    continue;
                }
            }
            if(m != 0){
                int l;
                //int len = strlen(result);字符串数组才可以用strlen
                for(l = 0;l < m - 1;l++){
                    printf("%d ",result[l]);
                }
                printf("%d\n",result[m - 1]);
            }
            else if(m == 0){
                printf("");
            }
            memset(a,0,sizeof(a));
            memset(result,0,sizeof(result));
        }
    }
    return 0;
}

#include <stdio.h>
int main()
{
    int n;
    int i,j;
    int temp;
    int a[1000];
    while(scanf("%d",&n) != EOF){
        for(i = 0; i < n; i++){
            scanf("%d",&a[i]);
    }
    if(n > 1){
        for(i = 1;i < n; i++){
            for(j = 1; j <= n-i; j++){
                if(a[j-1] > a[j]){
                    temp = a[j-1];
                    a[j-1] = a[j];
                    a[j] = temp;
                }
            }
        }
        printf("%d\n",a[n-1]);
        for(i = 0; i < n-1; i++){
            if(i == n-2)
                printf("%d\n",a[i]);
            else
                printf("%d ",a[i]);
        }
    }
    else if(n == 1){
        printf("%d\n",a[0]);
        printf("-1\n");
    }
  }
    return 0;
}

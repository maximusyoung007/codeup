#include<stdio.h>
int main()
{
    int a[15];
    int i,j,tem;
    for(i = 0;i < 10;i++){
        scanf("%d",&a[i]);
    }
    for(i = 0;i < 9;i++){
        for(j = 0;j < 9 - i;j++){
            if(a[j] > a[j + 1]){
                    tem = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = tem;
            }
        }
    }
    for(i = 0;i < 10;i++){
        printf("%d\n",a[i]);
    }
    return 0;
}

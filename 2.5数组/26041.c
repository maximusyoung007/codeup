#include<stdio.h>
int main()
{
    int a[20][20],n;
    scanf("%d",&n);
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            if(i == j)
                a[i][j] = 1;
        }
    }//最外层

    for(int i = 1;i < n;i++){
        a[i][0] = 1;
    }//第一列

    for(int i = 2;i < n;i++){
        for(int j = 1;j < i;j++){
            a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
        }
    }//中间需要相加的部分

    for(int i = 0;i < n;i++){
        for(int j = 0;j <= i;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }//输出
    return 0;
}

#include<stdio.h>
//用得迭代，效率更高一点。
int fibonacci(int n)
{
    int result = 0;
    if(n == 1)
        result = 1;
    else if(n == 2){
        result = 1;
    }
    else{
        int f1 = 1,f2 = 1,f3 = 0;
        for(int i = 0;i < n - 2;i++){
            f3 = f1 + f2;
            f1 = f2;
            f2 = f3;
        }
        result = f3;
    }
    return result;
}
int main()
{
    int n;
    scanf("%d",&n);
    while(n--){
        int m;
        scanf("%d",&m);
        for(int i = 0;i < m - 1;i++){
            printf("  ");
        }
        printf("0\n");
        //这种图形输出注意空格就可以。
        for(int i = 1;i < m;i++){
            for(int j = 0;j < m - 1 - i;j++){
                printf("  ");
            }
            printf("0 ");
            for(int j = 1;j <= 2 * i - 1;j++){
                printf("%d ",fibonacci(j));
            }
            printf("%d",fibonacci(2 * i));
            printf("\n");
        }
    }
    return 0;
}

#include<cstdio>
int main()
{
    int x,n;
    double result;
    while(scanf("%d%d",&x,&n) != EOF){
        result = x;
        for(int i = 1;i <= n;i++){
            result = result * 2 / 3 + x / (3 * result * result);
        }
        printf("%.6f\n",result);
    }
    return 0;
}

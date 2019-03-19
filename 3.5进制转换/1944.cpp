#include<cstdio>
int ten_to_eight(int n);
int main()
{
    int n;
    while(scanf("%d",&n) != EOF){
        int result = ten_to_eight(n);
        printf("%d\n",result);
    }
}
int ten_to_eight(int n)
{
    int temp = 0,result = 0,factor = 1;
    while(n){
        int temp = n % 8;
        result += temp * factor;
        n /= 8;
        factor *= 10;
    }
    return result;
}

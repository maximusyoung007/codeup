#include <cstdio>
int judge(int n)
{
    if(n % 7 == 0)return 1;
    while(n > 0){
        if(n % 10 == 7)return 1;
        n /= 10;
    }
}
int main()
{
    int n;
    int i;
    while(scanf("%d",&n) != EOF){
            int sum = 0;
        for(i = 1;i <= n;i++){
            if(judge(i) != 1)sum += i * i;
        }
        printf("%d\n",sum);
    }
    return 0;
}

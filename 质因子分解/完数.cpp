#include<cstdio>
int perfect_num(int n)
{
    int i;
    int perfectnum[100];
    int num = 0,sum = 0;
    for(i = 1;i < n;i++){
        if(n % i == 0)perfectnum[num++] = i;
    }
    for(i = 0;i < num;i++){
        sum += perfectnum[i];
    }
    if(n == sum) return 1;
}
int main()
{
    int n;
    while(scanf("%d",&n) != EOF){
            int countn = 0;
        for(int i = 1;i <= n;i++){
            if(perfect_num(i) == 1 && i != 1)
                printf("%d\n",i);
        }
    }
    return 0;
}

#include<cstdio>
#include<math.h>
int count_fact(int n)
{
    if(n == 1)
        return 1;
    int count = 0;
    for(int i = 1;i < sqrt(n);i++){
        if(n % i == 0){
            count += 2;
        }
    }
    if((int)(sqrt(n)) * (int)(sqrt(n)) == n){
        count++;
    }
    return count;
}
int main()
{
    int m;
    while(scanf("%d",&m) != EOF && m != 0){
        int n;
        for(int i = 0;i < m;i++){
            scanf("%d",&n);
            printf("%d\n",count_fact(n));
        }
    }
    return 0;
}

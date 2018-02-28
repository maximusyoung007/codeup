#include<cstdio>
#include<math.h>
int main()
{
    int m,n;
    int i;
    while(scanf("%d",&m) != EOF){
        while(m--){
        int sum = 0;
        scanf("%d",&n);
        for(i = fabs(n);i <= 2 * fabs(n);i++){
                sum += i;
        }
            if(n >= 0)printf("%d\n",sum);
            else printf("%d\n",-sum);
        }
    }
    return 0;
}

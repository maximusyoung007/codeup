#include <cstdio>
int main()
{
    int n,m,a,sum;
    scanf("%d",&n);
    while(n--){
            sum=0;
        scanf("%d",&m);
        while(m--){
            scanf("%d",&a);
            sum+=a;
        }printf("%d\n",sum);
        //if(n>0)printf("\n");
    }
    return 0;

}

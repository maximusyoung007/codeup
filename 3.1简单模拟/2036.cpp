#include<cstdio>
int main()
{
    int n,a;
    while(scanf("%d",&n) != EOF){
        int count_odd = 0,count_even = 0;
        for(int i = 0;i < n;i++){
            scanf("%d",&a);
            if(a % 2 == 0)
                count_even++;
            else
                count_odd++;
        }
        if(count_even > count_odd)
            printf("NO\n");
        else
            printf("YES\n");
    }
    return 0;
}

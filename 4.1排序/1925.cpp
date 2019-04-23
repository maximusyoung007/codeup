#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    int n,a[1100];
    while(scanf("%d",&n) != EOF){
        if(n == 1){
            scanf("%d",&a[0]);
            printf("%d\n",a[0]);
            printf("-1\n");
        }
        else{
            for(int i = 0;i < n;i++)
                scanf("%d",&a[i]);
            sort(a,a + n);
            printf("%d\n",a[n-1]);
            for(int i = 0;i < n-1;i++)
                printf("%d ",a[i]);
            printf("\n");
        }
    }
    return 0;
}

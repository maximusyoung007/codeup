#include<cstdio>
int main()
{
    int n,k,a[80],i,b[80],j;
    while(scanf("%d",&n) != EOF){
        while(n--){
            scanf("%d",&k);
            for(i = 0;i < k;i ++)
                scanf("%d",&a[i]);
            j = 0;
            if(a[0] > a[1] ||a[0] < a[1])
                b[j++] = 0;
            for(i = 1;i < k - 1;i++){
                if((a[i] < a[i - 1] && a[i] < a[i + 1]) || (a[i] > a[i + 1] && a[i] > a[i - 1]))
                    b[j++] = i;
            }
            if(a[k - 1] > a[k - 2] || a[k - 2] > a[k - 1])
                b[j++] = k - 1;
            for(int i = 0;i < j;i++)
                printf(i == j - 1?"%d\n":"%d ",b[i]);
        }
    }
    return 0;
}

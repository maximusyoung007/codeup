#include<cstdio>
int a[100001],hashtable[10001] = {0};
int main()
{
       int n;
       int i;
       scanf("%d",&n);
       for(i = 0;i < n;i++){
            scanf("%d",&a[i]);
            hashtable[a[i]]++;
       }
       int ans = -1;
       for(i = 0;i < n;i++){
            if(hashtable[a[i]] == 1){
                ans = a[i];
                break;
            }
       }
       if(ans == -1)printf("None");
       else printf("%d\n",ans);
       return 0;
}

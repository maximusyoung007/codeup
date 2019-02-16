#include<cstdio>
int main()
{
    int n;
    while(scanf("%d",&n) && n){
        int num_of_s[1100];
        for(int i = 0;i < n;i++){
            int value;
            scanf("%d",&value);
            num_of_s[i] = value;
        }
        int m,count = 0;
        scanf("%d",&m);
        for(int i = 0;i < n;i++){
            if(m == num_of_s[i])
                count++;
        }
        printf("%d\n",count);
    }
    return 0;
}

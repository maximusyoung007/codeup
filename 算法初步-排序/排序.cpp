#include<cstdio>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    int str[101];
    int len = 0;
    while(scanf("%d",&n) != EOF){
        for(int i = 0;i < n;i++){
            scanf("%d",&str[i]);
            len++;
        }

        sort(str,str + len);
        for(int j = 0;j < n;j++)
            printf("%d ",str[j]);

        puts(" ");
    }
    return 0;
}

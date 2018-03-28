#include<cstdio>
#include<algorithm>
using namespace std;
bool cmp(int a,int b)
{
    return a > b;
}
int main()
{
    int m,n;
    int str[1000010];//cannot pass in local because the array is too large,but can pass online
    scanf("%d %d",&m,&n);
    for(int i = 0;i < m;i++){
        scanf("%d",&str[i]);
    }
    sort(str,str + m,cmp);
    /*for(int i = 0;i < m;i++){
        printf("%d ",str[i]);
    }
    printf("\n");*/
    printf("%d",str[n - 1]);
    return 0;
}

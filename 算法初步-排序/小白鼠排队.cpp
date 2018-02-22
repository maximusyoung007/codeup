#include<cstdio>
#include<string.h>
#include<algorithm>
using namespace std;
struct mouse{
    int weight;
    char color[10];
}mou[100];
bool cmp(mouse a,mouse b)
{
    return a.weight > b.weight;
}
int main()
{
    int m;
    int i;
    while(scanf("%d",&m) != EOF){
        for(i = 0;i < m;i++)
            scanf("%d %s",&mou[i].weight,mou[i].color);
        sort(mou,mou + m,cmp);
        for(i = 0;i < m;i++)
            printf("%s\n",mou[i].color);
    }
}

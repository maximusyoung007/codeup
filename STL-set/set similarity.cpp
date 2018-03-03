#include<cstdio>
#include<set>
using namespace std;
set<int> st[51];
void compare(int x,int y)
{
    int totalnum = st[y].size();
    int samenum = 0;
    for(set<int> :: iterator it = st[x].begin();it != st[x].end();it++)
    {
        //can find it and it not the end of st[y]
        if(st[y].find(*it) != st[y].end())samenum++;
        else totalnum++;
    }
    printf("%.1f",samenum * 100.0 / totalnum);
    printf("%%");
    printf("\n");
}
int main()
{
    int n,k,q,v,num1,num2;
    scanf("%d",&n);
    for(int i = 1;i <= n;i++){
        scanf("%d",&k);
        for(int j = 0;j < k;j++){
            scanf("%d",&v);
            st[i].insert(v);
        }
    }
    scanf("%d",&q);
    for(int i = 0;i < q;i++){
        scanf("%d%d",&num1,&num2);
        compare(num1,num2);
    }
    return 0;
}

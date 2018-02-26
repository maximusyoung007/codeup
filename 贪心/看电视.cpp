//always choose the biggest left points
#include<cstdio>
#include<algorithm>
using namespace std;
struct time{
    int start,ending;
}T[110];
bool cmp(time a,time b)
{
    if(a.start != b.start)return a.start > b.start;
    else return a.ending < b.ending;
}
int main()
{
    int n;
    while(scanf("%d",&n),n != 0){
        for(int i = 0;i < n;i++){
            scanf("%d%d",&T[i].start,&T[i].ending);
        }
        sort(T,T + n,cmp);
        int ans = 1,lastX = T[0].start;
        for(int i = 1;i < n;i++){
            if(T[i].ending <= lastX){
                lastX = T[i].start;
                ans++;
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}

#include<cstdio>
#include<algorithm>
using namespace std;
struct room{
    double j,f;
    double r;
}r[1010];
bool cmp(room a,room b)
{
    return a.r > b.r;
}
int main()
{
    int N;
    double M;
    double ans;
    while(scanf("%lf%d",&M,&N),M + 1,N + 1)
    {
        for(int i = 0;i < N;i++)
        {
           scanf("%lf%lf",&r[i].j,&r[i].f);
           r[i].r = (double)r[i].j / r[i].f;
        }
        sort(r,r + N,cmp);
        ans = 0;
        for(int i = 0;i < N;i++)
        {
            if(M >= r[i].f)
            {
                ans += r[i].j;
                M -= r[i].f;
            }
            else
            {
                ans += (r[i].j / r[i].f)*M;
                break;
            }
        }
        printf("%.3lf\n",ans);
    }
    return 0;
}

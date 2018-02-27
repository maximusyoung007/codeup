#include<cstdio>
#include<algorithm>
using namespace std;
const int maxn = 510;
const int INF = 1000000000;
struct station{
    double price,dis;
}st[maxn];
bool cmp(station a,station b)
{
    return a.dis < b.dis;
}
int main()
{
    int n;
    double Cmax,D,Davg;
    scanf("%lf%lf%lf%d",&Cmax,&D,&Davg,&n);
    for(int i = 0;i < n;i++)
        scanf("%lf%lf",&st[i].price,&st[i].dis);
    st[n].price = 0;
    st[n].dis = D;
    sort(st,st + n,cmp);
    if(st[0].dis != 0)printf("The maximum travel distance = 0.00\n");
    else{
        int now = 0;
        double ans = 0,nowTank = 0,MAX = Cmax * Davg;
        while(now < n){
            int k = -1;//the number of the station whose price is minimum
            double priceMin = INF;//the minimum price
            for(int i = now + 1;i <= n && st[i].dis - st[now].dis <= MAX;i++){
                if(st[i].price < priceMin){
                    priceMin = st[i].price;
                    k = i;
                    if(priceMin < st[now].price){
                        break;
                    }
                }
            }
            if(k == -1)break;
            double need = (st[k].dis - st[now].dis) / Davg;
                if(priceMin < st[now].price){// if price of k is lower than the price now
                    if(nowTank < need){
                        ans += (need - nowTank) * st[now].price;
                        nowTank = 0;
                    }
                    else {nowTank -= need;}
                }else {
                    ans += (Cmax - nowTank) * st[now].price;
                    nowTank = Cmax - need;
                }
                now = k;
        }
        if(now == n){
            printf("%.2f\n",ans);
        }
        else printf("The maximum travel distance = %.2f\n",st[now].dis + MAX);
    }
    return 0;
}

#include<stdio.h>
#include<algorithm>
using namespace std;
int p[110];
int main()
{
    int c,n,v,w;
    int i,j;
    scanf("%d",&c);
    while(c--)
    {
        scanf("%d%d%d",&n,&v,&w);
        for(i = 0;i < n;i++)
            scanf("%d",&p[i]);
        sort(p,p + n);
        double P = 0;//浓度
        int V = 0; //当前的体积
        for(i = 0;i < n;i++)
        {
            if((P * V + p[i] * v) / (V + v) <= w)
            {
                P = (P * V + p[i] * v ) / (V + v);
                V += v;
            }
            else
                break;
        }
        printf("%d %.2lf\n",V,P / 100);
    }
    return 0;
}

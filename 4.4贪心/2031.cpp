//https://www.cnblogs.com/XBWer/p/3866486.html
#include<stdio.h>
#include<algorithm>
#include<iostream>
using namespace std;

typedef struct
{
    double pos;
    double price;
}gasstation;
gasstation gasst[502];

bool cmp(gasstation a,gasstation b)
{
    if(a.pos < b.pos)
        return true;
    return false;
}

int main()
{
    double Cmax,D,Davg;
    int N;
    scanf("%lf%lf%lf%d",&Cmax,&D,&Davg,&N);
    int i;
    for(i = 0;i < N;i++)
        scanf("%lf%lf",&gasst[i].price,&gasst[i].pos);
    sort(gasst,gasst+N,cmp);
    if(D == 0)
    {
        printf("0.00\n");
        return 0;
    }
    if(gasst[0].pos != 0)
    {
        printf("The maximum travel distance = 0.00\n");
        return 0;
    }
    int curstnum = 0;               //当前所处的油站编号,即当前的位置
    double curgas = 0;              //当前的油量
    double curcost = 0;                //当前的花费
    bool flag = false;              //是否达到目的
    double maxrundis = Cmax * Davg;        //邮箱加满最远能行驶的距离
    while(!flag)
    {
        bool tag = false;            //最大距离内是否有加油站
        bool ifcheaper = false;    //是否有便宜的
        double cheapestprice = 10000;    //找出最便宜的
        int cheapestnum;        //没有更便宜的情况下，找出最便宜的
        for(i = curstnum+1;i < N;i++)
        {
            if((gasst[i].pos - gasst[curstnum].pos) <= maxrundis)    //范围内
            {
                tag = true;         //有加油站
                if(gasst[i].price < gasst[curstnum].price)        //情况3-a
                {                                            //且有更便宜的
                    ifcheaper = true;
                    double dist = gasst[i].pos-gasst[curstnum].pos;
                    double needgas = dist / Davg - curgas;
                    curgas = 0;
                    curcost += (needgas * gasst[curstnum].price);
                    curstnum = i;
                    break;
                }
                if(gasst[i].price < cheapestprice)
                {
                    cheapestprice = gasst[i].price;
                    cheapestnum = i;
                }
            }
            else
                break;
        }
        if(!ifcheaper && (maxrundis >= (D - gasst[curstnum].pos)))   //说明已经可以到达目的地了,情况1
        {
            double dist = D - gasst[curstnum].pos;
            double needgas = dist / Davg - curgas;
            curcost += needgas * gasst[curstnum].price;
            printf("%.2lf\n",curcost);
            return 0;
        }
        if(tag && !ifcheaper)            //情况3-b
        {
            double needgas = Cmax-curgas;
            curcost += (needgas * gasst[curstnum].price);
            double dist = gasst[cheapestnum].pos - gasst[curstnum].pos;
            curgas = Cmax - dist / Davg;
            curstnum = cheapestnum;
        }
        else if(!tag)                        //情况2
        {
            printf("The maximum travel distance = %.2lf\n",gasst[curstnum].pos + maxrundis);
            return 0;
        }
    }
    return 0;
}

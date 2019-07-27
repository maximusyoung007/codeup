#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
typedef struct{
    double j,f;
    double r;
}change;
bool cmp(change a,change b)
{
    if(a.r == b.r)
        return a.j > b.j;
    return a.r > b.r;
}
int main()
{
    double m;
    int n;
    while(cin >> m >> n && m != -1 && n != -1){
        change c[1100];
        for(int i = 0;i < n;i++){
            cin >> c[i].j >> c[i].f;
            c[i].r = (double)(c[i].j / c[i].f);//calculate ratio
        }
        sort(c,c+n,cmp);
        double rest = 0;
        for(int i = 0;i < n;i++){
            if(m >= c[i].f){
                m -= c[i].f;
                rest += c[i].j;
            }
            else if(m > 0 && m < c[i].f){
                rest += c[i].j / c[i].f * m;
                m = 0;
            }
            else
                break;
        }
        printf("%.3lf\n",rest);
    }
}


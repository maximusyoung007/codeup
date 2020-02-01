#include<iostream>
#include<algorithm>
#include<iomanip>
//本答案通过了牛客网的测试用例，但是没有通过codeup的测试用例
using namespace std;
const int maxn = 110;
const double inf = 0x3fffffff;
int n;
double d[maxn], g[maxn][maxn];
bool vis[maxn] = { false };
struct point {
    double x, y;
};
void prim()
{
    fill(d, d + maxn, inf);
    d[0] = 0;
    double ans = 0;
    for (int i = 0; i < n; i++)
    {
        int u = -1;
        double min_ = inf;
        for (int j = 0; j < n; j++)
        {
            if (vis[j] == false && d[j] < min_)
            {
                u = j;
                min_ = d[j];
            }
        }
        if (u == -1)
            return;
        vis[u] = true;
        ans += d[u];
        for (int v = 0; v < n; v++)
        {
            if (vis[v] == false && g[u][v] != inf && g[u][v] < d[v])
            {
                d[v] = g[u][v];
            }
        }
    }
    printf("%.2f\n", ans);
}
int main()
{
    while (cin >> n && n != 0)
    {
        fill(g[0], g[0] + maxn * maxn, inf);
        fill(vis, vis + maxn, false);
        point p[maxn];
        for (int i = 0; i < n; i++)
        {
            double a, b;
            cin >> a >> b;
            p[i].x = a;
            p[i].y = b;
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if(i != j)
                    g[i][j] = sqrt(double((p[i].x - p[j].x) * (p[i].x - p[j].x) + (p[i].y - p[j].y) * (p[i].y - p[j].y)));;
            }
        }
        prim();
    }
}
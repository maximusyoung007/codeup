#include <iostream>
#include<algorithm>
using namespace std;
const int maxn = 1100;
const int inf = 0x3fffffff;
//n村庄数
int n,m, g[maxn][maxn];
int d[maxn];
bool vis[maxn] = { false };
int prim()
{
    fill(d, d + maxn, inf);
    d[1] = 0;
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        int u = -1, min_ = inf;
        for (int j = 1; j <= n; j++)
        {
            if (vis[j] == false && d[j] < min_)
            {
                u = j;
                min_ = d[j];
            }
        }
        if (u == -1)
            return -1;
        vis[u] = true;
        ans += d[u];
        for (int v = 1; v <= n; v++)
        {
            if (vis[v] == false && g[u][v] != inf && g[u][v] < d[v])
            {
                d[v] = g[u][v];
            }
        }
    }
    return ans;
}
int main()
{
    while (cin >> m >> n && m != 0)
    {
        fill(g[0], g[0] + maxn * maxn, inf);
        fill(vis, vis + maxn, false);
        for (int i = 0; i < m; i++)
        {
            int a, b, c;
            cin >> a >> b >> c;
            //考虑有道路重复输入的可能
            if (c < g[a][b])
            {
                g[a][b] = g[b][a] = c;
            }
        }
        int result = prim();
        if (result != -1)
            cout << result << endl;
        else
            cout << "?" << endl;
    }
    return 0;
}

#include <iostream>
#include <algorithm>
using namespace std;
const int maxn = 1100;
const int inf = 0x3fffffff;
int n, g[maxn][maxn];
int d[maxn];
bool vis[maxn] = { false };
int prim()
{
    fill(d, d + maxn, inf);
    d[1] = 0;
    int ans = 0;
    for (int i = 0; i < n; i++)
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
    while (cin >> n && n != 0)
    {
        fill(g[0], g[0] + maxn * maxn, inf);
        fill(vis, vis + maxn, false);
        int a, b, c;
        for (int i = 0; i < n * (n - 1) / 2; i++)
        {
            cin >> a >> b >> c;
            g[a][b] = c;
            g[b][a] = c;
        }
        int result = prim();
        cout << result << endl;
    }
}


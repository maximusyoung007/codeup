#include<iostream>
#include<algorithm>
using namespace std;
const int maxn = 1100;
const int inf = 0x3fffffff;
//n 顶点数 d 起点到各点的最短路径
int n, m, g[maxn][maxn];
int d[maxn];
int c[maxn];
int a, b, e, f;
int s, t;
int cost[maxn][maxn];
bool vis[maxn] = { false };
void dijkstra(int s)
{
	fill(d, d + maxn, inf);
	d[s] = 0;
	c[s] = 0;
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
			return;
		vis[u] = true;
		for (int v = 1; v <= n; v++)
		{
			if (vis[v] == false && g[u][v] != inf)
			{
				if (d[u] + g[u][v] < d[v])
				{
					d[v] = d[u] + g[u][v];
					c[v] = c[u] + cost[u][v];
				}
				else if (d[u] + g[u][v] == d[v] && c[u] + cost[u][v] < c[v])
				{
					c[v] = c[u] + cost[u][v];
				}
			}
		}
	}
}
int main()
{
	while (cin >> n >> m)
	{
		if (m != 0 && n != 0)
		{
			fill(g[0], g[0] + maxn * maxn, inf);
			fill(cost[0], cost[0] + maxn * maxn, inf);
			fill(c, c + maxn, inf);
			fill(vis, vis + maxn, false);
			for (int i = 0; i < m; i++)
			{
				cin >> a >> b >> e >> f;
				g[a][b] = e;
				g[b][a] = e;
				cost[a][b] = f;
				cost[b][a] = f;
			}
			cin >> s >> t;
			dijkstra(s);
			cout << d[t] << " " << c[t];
			cout << endl;
		}
		else
		{
			break;
		}
	}
	return 0;
}

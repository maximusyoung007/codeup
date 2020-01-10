#include <iostream>
#include<algorithm>
#include<math.h>
using namespace std;
const int maxn = 150;
const int inf = 0x3fffffff;
int n,m, g[maxn][maxn];
int d[maxn],f[maxn];
bool vis[maxn] = { false };
int mod(int x, int y)
{
	int num = 1;
	while (y--)
	{
		num = (num * x) % 100000;
	}
	return num;
}
int find(int x)
{
	while (x != f[x])
		x = f[x];
	return x;
}
void dijkstra(int s)
{
	fill(d, d + maxn, inf);
	fill(vis, vis + maxn, false);
	d[s] = 0;
	for (int i = 0; i < n; i++)
	{
		int u = -1, min_ = inf;
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
		for (int v = 0; v < n; v++)
		{
			if (vis[v] == false && g[u][v] != inf && d[u] + g[u][v] < d[v])
			{
				d[v] = d[u] + g[u][v];
			}
		}
	}
}
int main()
{
	while (cin >> n >> m)
	{
		for (int i = 0; i < maxn; i++)
		{
			f[i] = i;
		}
		fill(g[0], g[0] + maxn * maxn, inf);
		for (int i = 0; i < m; i++)
		{	
			int a, b;
			cin >> a >> b;
			//要保证下一个路径比前面的路径加起来都大
			int fa = find(f[a]), fb = find(f[b]);
			if (fa != fb)
				f[fa] = fb;
			else
				continue;
			int len = mod(2,i);
			g[a][b] = len;
			g[b][a] = len;
		}
		dijkstra(0);
		for (int i = 1; i < n; i++)
		{
			if (d[i] == inf)
				cout << "-1" << endl;
			else
				cout << d[i] % 100000 << endl;
		}
	}
	return 0;
}
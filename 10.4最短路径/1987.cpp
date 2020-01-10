#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;
const int maxn = 1100;
const int inf = 0x3fffffff;
int n, m,s, t, g[maxn][maxn];
int d[maxn];
//记录前驱节点,每个节点可能有多个前驱节点
vector<int> pre[maxn];
vector<int> temp_path; 
vector<int> path;
bool vis[maxn] = { false };
void dijkstra(int s)
{
	fill(d, d + maxn, inf);
	fill(vis, vis + maxn, false);
	d[s] = 0;
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
					pre[v].clear();
					pre[v].push_back(u);
				}
				else if (d[u] + g[u][v] == d[v])
					pre[v].push_back(u);
			}
		}
	}
}
bool compare(vector<int> a, vector<int> b)
{
	int i = a.size() - 1, j = b.size() - 1;
	while (i >= 0 && j >= 0)
	{
		if (a[i] != b[j])
			return a[i] < b[j];
		--i; --j;
	}
	return a.size() < b.size();
}

void dfs(int v, int s)
{
	if (v == s)
	{
		temp_path.push_back(v);
		if (path.size() == 0)
			path = temp_path;
		else if (compare(temp_path, path))
			path = temp_path;
		temp_path.pop_back();
		return;
	}
	temp_path.push_back(v);
	for (int i = 0; i < pre[v].size(); ++i)
		dfs(pre[v][i], s);
	temp_path.pop_back();
}
int main()
{
	while (cin >> n >> m >> s >> t)
	{
		temp_path.clear();
		path.clear();
		fill(g[0], g[0] + maxn * maxn, inf);
		for (int i = 0; i < m; i++)
		{
			int a, b,c;
			cin >> a >> b >> c;
			if (c < g[a][b])
			{
				g[a][b] = c;
				g[b][a] = c;
			}
		}
		dijkstra(s);
		if (d[t] != inf)
		{
			cout << d[t] << endl;
			dfs(t,s);
			for (vector<int>::iterator it = path.end(); it != path.begin();)
			{
				cout << *(--it) << " ";
			}
		}
		else
		{
			cout << "can't arrive" << endl;
		}
		cout << endl;
	}
	return 0;
}
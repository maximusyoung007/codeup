#include <iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<vector>
using namespace std;
const int maxn = 550;
vector<int> g[maxn];
int n,m, in_degree[maxn];
bool topo_logical_sort()
{
	int num = 0;
	queue<int> q;
	for (int i = 0; i < n; i++)
	{
		if (in_degree[i] == 0)
		{
			q.push(i);
		}
	}
	while (!q.empty())
	{
		int u = q.front();
		q.pop();
		for (int i = 0; i < g[u].size(); i++)
		{
			int v = g[u][i];
			in_degree[v]--;
			if (in_degree[v] == 0)
				q.push(v);
		}
		g[u].clear();
		num++;
	}
	if (num == n)
		return true;
	return false;
}
int main()
{
	while (cin >> n >> m,n)
	{
		fill(in_degree, in_degree + maxn, 0);
		for (int i = 0; i < maxn; i++)
		{
			g[i].clear();
		}
		int a, b;
		for (int i = 0; i < m; i++)
		{
			cin >> a >> b;
			g[a].push_back(b);
			in_degree[b]++;
		}

		if (topo_logical_sort())
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}

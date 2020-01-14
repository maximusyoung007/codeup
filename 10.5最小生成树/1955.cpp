#include<iostream>
#include<algorithm>
//AC,但是有点问题
using namespace std;
const int maxn = 110;
const int maxe = 6000;
struct edge
{
	int u, v;
	int cost;
	bool is_exist;
}e[maxe];
bool cmp(edge a, edge b)
{
	return a.cost < b.cost;
}
int father[maxn];
int find_father(int x)
{
	int a = x;
	while (x != father[x])
	{
		x = father[x];
	}
	while (a != father[a])
	{
		int z = a;
		a = father[a];
		father[z] = x;
	}
	return x;
}
int kruskal(int n,int edge)
{
	int ans = 0, edge_num = edge;
	sort(e, e + n*(n-1)/2, cmp);
	for (int i = 0; i < n*(n-1)/2; i++)
	{
		//这条边不存在
		if (e[i].is_exist == false)
		{
			int fa_u = find_father(e[i].u);
			int fa_v = find_father(e[i].v);
			if (fa_u != fa_v)
			{
				father[fa_u] = fa_v;
				ans += e[i].cost;
				edge_num++;
				if (edge_num == n - 1)
					break;
			}
		}
	}
	if (edge_num != n - 1)
		return -1;
	else
		return ans;
}
int main()
{
	int n;
	while (cin >> n && n != 0)
	{
		int a, b, c, d;
		//初始化边
		for (int i = 0; i < n*(n-1)/2; i++)
		{
			e[i].u = e[i].v = e[i].cost = 0;
			e[i].is_exist = false;
		}
		//用来存放已存在的边数，初始化为0
		int edge = 0;
		//初始化并查集
		for (int i = 1; i <= n; i++)
		{
			father[i] = i;
		}
		for (int i = 0; i < n*(n - 1) / 2; i++)
		{
			cin >> a >> b >> c >> d;
			e[i].u = a;
			e[i].v = b;
			e[i].cost = c;
			//这条路已经建了，就加到并查集中
			if (d == 1)
			{
				e[i].is_exist = true;
				if (e[i].u != e[i].v)
				{
					father[e[i].u] = e[i].v;
					edge++;
				}
			}
		}
		int ans = kruskal(n, edge);
		if (ans == -1)
			cout << 0 << endl;
		else
			cout << ans << endl;
	}
	return 0;
}
	

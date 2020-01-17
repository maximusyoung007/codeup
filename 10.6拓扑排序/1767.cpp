#include <iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<stack>
using namespace std;
const int maxn = 110;
vector<int> g[maxn];
vector<int> result;
int n, m, in_degree[maxn];
bool topo_logical_sort()
{
	int num = 0;
	stack<int> q;
	//queue<int> q;
	for (int i = 0; i < n; i++)
	{
		if (in_degree[i] == 0)
		{
			q.push(i);
		}
	}
	/*while(!q_temp.empty())
	{
		int t = q_temp.top();
		q.push(t);
		q_temp.pop();
	}*/
	while (!q.empty())
	{
		int u = q.top();
		result.push_back(u);
		q.pop();
		for (int i = 0; i < g[u].size(); i++)
		{
			int v = g[u][i];
			in_degree[v]--;
			//cout << in_degree[v] << endl;
			if (in_degree[v] == 0)
				q.push(v);
		}
		num++;
	}
	if (num == n)
		return true;
	return false;
}
int main()
{	
	while (cin >> n)
	{
		fill(in_degree, in_degree + maxn, 0);
		result.clear();
		for (int i = 0; i < maxn; i++)
		{
			g[i].clear();
		}
		int temp;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cin >> temp;
				if (temp == 1 && i != j)
				{
					in_degree[j]++;
					g[i].push_back(j);
				}
			}
		}

		//topo_logical_sort返回true，拓扑排序成功，没有回路
		if (topo_logical_sort())
		{
			for (vector<int>::iterator it = result.begin();it!=result.end();it++)
				cout << *it << " ";
			cout << endl;
		}
		//有回路
		else
			cout << "ERROR" << endl;
	}
	return 0;
}

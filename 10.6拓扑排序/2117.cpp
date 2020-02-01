#include <iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<vector>
using namespace std;
const int maxn = 550;
vector<int> g[maxn];
vector<int> result;
int n, m, in_degree[maxn];
bool topo_logical_sort()
{
    int num = 0;
    priority_queue<int ,vector<int>,greater<int> > q;
    for (int i = 1; i <= n; i++)
    {
        if (in_degree[i] == 0)
        {
            q.push(i);
        }
    }
    while (!q.empty())
    {
        int u = q.top();
        result.push_back(u);
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
    while (cin >> n >> m,m,n)
    {
        fill(in_degree, in_degree + maxn, 0);
        result.clear();
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
        {
            for (vector<int>::iterator it = result.begin(); it != result.end(); it++)
                cout << *it << " ";
            cout << endl;
        }
    }
    return 0;
}

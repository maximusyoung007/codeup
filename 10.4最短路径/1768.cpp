#include<iostream>
#include<algorithm>
using namespace std;
const int maxn = 100;
const int inf = 0x3fffffff;
//n 顶点数 d 起点到各点的最短路径
int n,m,g[maxn][maxn];
int d[maxn];
bool vis[maxn] = {false};
void dijkstra(int s)
{
    fill(d,d+maxn,inf);
    d[s] = 0;
    for(int i = 0;i < n;i++)
    {
        int u = -1,min_ = inf;
        for(int j = 0;j < n;j++)
        {
            if(vis[j] == false && d[j] < min_)
            {
                u = j;
                min_ = d[j];
            }
        }
        if(u == -1)
            return;
        vis[u] = true;
        for(int v = 0;v < n;v++)
        {
            if(vis[v] == false && g[u][v] != 0 && d[u] + g[u][v] < d[v])
            {
                d[v] = d[u] + g[u][v];
            }
        }
    }
}
int main()
{
    cin >> n >> m;
    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < n;j++)
        {
            cin >> g[i][j];
        }
    }
    dijkstra(m);
    for(int i = 0;i < n;i++)
    {
        if(i == m)
            continue;
        else if(d[i] == inf)
            cout << "-1" << " ";
        else
            cout << d[i] << " ";
    }
    cout << endl;
    return 0;
}

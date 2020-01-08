#include<iostream>
#include<vector>
using namespace std;
const int maxn = 1000010;
vector<int> adj[maxn];
int n = 0;
int result = 0;
bool vis[maxn] = {false};
//判断这个节点是否存在
bool is_exist[maxn] = {false};
void dfs(int u,int depth)
{
    vis[u] = true;
    for(int i = 0;i < adj[u].size();i++)
    {
        int v = adj[u][i];
        if(vis[v] == false)
        {
            dfs(v,depth + 1);
        }
    }
}
void dfs_traver()
{
    for(int u = 0;u <= n;u++)
    {
        //节点u存在并且未被访问
        if(vis[u] == false && is_exist[u])
        {
            dfs(u,1);
            result++;
        }
    }
    cout << result << endl;
}
int main()
{
    int a,b;
    while(cin >> a >> b)
    {
        if(a > n) n = a;
        if(b > n) n = b;
        adj[a].push_back(b);
        adj[b].push_back(a);
        is_exist[a] = true;
        is_exist[b] = true;
    }
    dfs_traver();
    return 0;
}

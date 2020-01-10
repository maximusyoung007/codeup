#include<iostream>
#include<algorithm>
using namespace std;
const int maxn = 60;
const int inf = 0x3fffffff;
int n;
int dis[maxn][maxn];
void floyd()
{
    for(int k = 0;k < n;k++)
    {
        for(int i = 0;i < n;i++)
        {
            for(int j = 0;j < n;j++)
            {
                if(dis[i][k] != 0 && dis[k][j] != 0 && dis[i][k] + dis[k][j] < dis[i][j])
                {
                    dis[i][j] = dis[i][k] + dis[k][j];
                }
            }
        }
    }
}
int main()
{
    cin >> n;
    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < n;j++)
        {
            cin >> dis[i][j];
            if(dis[i][j] == 0 && i != j)
            {
                dis[i][j] = inf;
            }
        }
    }
    floyd();
    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < n;j++)
        {
            if(dis[i][j] == inf)
                cout << "-1" << " ";
            else
                cout << dis[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

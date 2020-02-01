#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <string.h>
#pragma warning(disable:4996)
using namespace std;

struct node {
    int x, y, len;
}road[5050];
int pre[30];

int find(int x)
{
    if (pre[x] != x)
        pre[x] = find(pre[x]);
    return pre[x];
}

int Union(int a, int b)
{
    int x, y;
    x = find(a);
    y = find(b);
    if (x == y) return 1;
    else
    {
        pre[y] = x;
        return 0;
    }
}

bool cmp(node a, node b)
{
    return a.len < b.len;
}

int main()
{
    int n, m, i, j, p, q;
    char a, b;
    while (scanf("%d", &n) == 1)
    {
        if (n == 0) break;
        int k = 0;
        for (i = 1; i < n; i++)
        {
            cin >> a >> m;
            for (j = 1; j <= m; j++)
            {
                road[k].x = a - 'A' + 1;
                cin >> b >> q;
                road[k].y = b - 'A' + 1;
                road[k].len = q;
                k++;
            }
            pre[i] = i;
        }
        pre[i] = i;
        sort(road, road + k, cmp);
        int ans = 0;
        for (i = 0; i < k; i++)
        {
            if (Union(road[i].x, road[i].y) == 0)
                ans += road[i].len;
        }
        printf("%d\n", ans);
    }
    return 0;
}
#include <iostream>
using namespace std;
const int N = 1100;
int father[N];
bool is_root[N];
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
void union_(int a, int b)
{
    int fa_a = find_father(a);
    int fa_b = find_father(b);
    if (fa_a != fa_b)
    {
        father[fa_a] = fa_b;
    }
}
void init(int n)
{
    for (int i = 1; i <= n; i++)
    {
        father[i] = i;
        is_root[i] = false;
    }
}
int main()
{
    int n, m, a, b;
    while (cin >> n >> m)
    {
        if (n == 0 && m == 0)
            break;
        else if (m > n - 1)
        {    
            for (int i = 0; i < m; i++)
            {
                cin >> a >> b;
                union_(a, b);
            }
            cout << "No" << endl;
        }
        else
        {
            init(n);
            for (int i = 0; i < m; i++)
            {
                cin >> a >> b;
                union_(a, b);
            }
            for (int i = 1; i <= n; i++)
            {
                is_root[find_father(i)] = true;
            }
            int ans = 0;
            for (int i = 1; i <= n; i++)
            {
                ans += is_root[i];
            }
            if (ans == 1)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
    }
    return 0;
}

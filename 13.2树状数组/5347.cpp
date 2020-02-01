//https://blog.csdn.net/a845717607/article/details/82079365
#include <iostream>
#include<cstring>
using namespace std;
const int maxn = 50010;
#define lowbit(i) ((i) & (-i))
int c[maxn], a[maxn];
void update(int x, int v)
{
    if(x == 0)
        c[0] += v;
    else
        for (int i = x; i < maxn; i += lowbit(i))
        {
            c[i] += v;
        }
}
int get_sum(int x)
{
    int sum = 0;
    if(x == -1)
        return 0;
    for (int i = x; i > 0; i -= lowbit(i))
    {
        sum += c[i];
    }
    return sum + c[0];
}
int main()
{
    int n;
    while (cin >> n && n != 0)
    {
        long long sum = 0;
        memset(c, 0, sizeof(c));
        memset(a, 0, sizeof(a));
        int sum1[maxn], sum2[maxn];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            update(a[i], 1);
            sum1[i] = get_sum(a[i] - 1);
            //cout << "sum1-----" << sum1[i] << endl;
        }
        memset(c, 0, sizeof(c));
        for (int i = n; i > 0; i--)
        {
            update(a[i], 1);
            sum2[i] = get_sum(a[i] - 1);
        }
        for (int i = 1; i <= n; i++)
        {
            sum += sum1[i] * sum2[i];
        }
        cout << sum << endl;
    }
    return 0;
}

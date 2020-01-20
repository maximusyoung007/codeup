#include <iostream>
#include<algorithm>
using namespace std;
const int maxn = 1100;
int a[maxn], dp[maxn];
int main()
{
    int n;
    while (cin >> n)
    {
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        int ans = 0;
        for (int i = 1; i <= n; i++)
        {
            dp[i] = 1;
            for (int j = 1; j < i; j++)
            {
                if (a[i] >= a[j] && dp[j] + 1 > dp[i])
                    dp[i] = dp[j] + 1;
            }
            ans = max(ans, dp[i]);
        }
        cout << ans << endl;
    }
    return 0;
}

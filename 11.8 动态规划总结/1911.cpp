#include<iostream>
#include<algorithm>
using namespace std;
const int maxn = 50;
int a_[maxn],a[maxn],dp[maxn];
int main()
{
    int k;
    while(cin >> k && k != 0)
    {
        fill(a_,a + maxn,0);
        fill(a,a + maxn,0);
        for(int i = 1;i <= k;i++)
            cin >> a_[i];
        int t = 1;
        for(int i = k;i >= 1;i--)
        {
            a[t] = a_[i];
            t++;
        }
        int ans = -1;
        for(int i = 1;i <= k;i++)
        {
            dp[i] = 1;
            for(int j = 1;j < i;j++)
            {
                if(a[i] >= a[j] && dp[j] + 1 > dp[i])
                {
                    dp[i] = dp[j] + 1;
                }
            }
            ans = max(ans,dp[i]);
        }
        cout << ans << endl;
    }
    return 0;
}

#include<iostream>
using namespace std;
const int maxn = 110;
int a[maxn][maxn];
int dp[maxn];
int main()
{
    int n;
    while(cin >> n)
    {
        fill(a[0],a[0] + maxn*maxn,0);
        fill(dp,dp + maxn,0);
        int c[n + 10],result = 0;
        for(int i = 0;i < n;i++)
        {
            for(int j = 0;j < n;j++)
            {
                cin >> a[i][j];
            }
        }
        //res有可能小于0
        int res = a[0][0];
        for(int i = 0;i < n;i++)
        {
            fill(c,c + n,0);
            for(int j = i;j < n;j++)
            {
                for(int k = 0;k < n;k++)
                {
                    c[k] += a[j][k];
                }
                dp[0] = c[0];
                for(int l = 1;l < n;l++)
                {
                    dp[l] = max(c[l],dp[l - 1] + c[l]);
                }
                for(int l = 1;l < n;l++)
                {
                    if(dp[l] > dp[result])
                        result = l;
                }
                if(dp[result] > res)
                    res = dp[result];
            }
        }
        cout << res << endl;
    }
    return 0;
}

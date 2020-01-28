#include<iostream>
#include<algorithm>
using namespace std;
const int maxn = 10010;
const int maxv = 10010;
int w[maxn];
long long dp[maxv];
int main()
{
    int n,v;
    while(cin >> n >> v)
    {
        fill(w,w+maxn,0);
        for(int i = 0;i < n;i++)
            cin >> w[i];
        fill(dp,dp+maxn,0);
        dp[0] = 1;
        sort(w,w + n);
        for(int i = 0;i < n;i++)
            for(int j = w[i];j <= v;j++)
                dp[j] = dp[j] + dp[j - w[i]];
        cout << dp[v] << endl;
    }
    return 0;
}

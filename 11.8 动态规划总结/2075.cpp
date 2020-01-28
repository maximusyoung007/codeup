#include<iostream>
#include<algorithm>
using namespace std;
const int maxn = 1100;
int pi[maxn],c[maxn],dp[maxn];
int main()
{
    int C,n;
    while(cin >> C >> n)
    {
        fill(pi,pi + maxn,0);
        fill(c,c + maxn,0);
        fill(dp,dp + maxn,0);
        for(int i = 1;i <= n;i++)
            cin >> pi[i] >> c[i];
        for(int j = 0;j < C;j++)
            dp[j] = 0;
        for(int i = 1;i <= n;i++)
            for(int j = C;j >= pi[i];j--)
                dp[j] = max(dp[j],dp[j-pi[i]] + c[i]);
        int max = 0;
        for(int j = 0;j <= C;j++)
        {
            if(dp[j] > max)
                max = dp[j];
        }
        cout << max << endl;
    }
}

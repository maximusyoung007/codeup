#include<iostream>
#include<algorithm>
using namespace std;
const int maxn = 20010;
const int maxv = 20010;
int w[maxn],dp[maxv];
int main()
{
    int n,v;
    cin >> v >> n;
    for(int i = 1;i <= n;i++)
        cin >> w[i];
    for(int i = 0;i <= v;i++)
        dp[i] = 0;
    for(int i = 1;i <= n;i++)
        for(int j = v;j >= w[i];j--)
            dp[j] = max(dp[j],dp[j - w[i]] + w[i]);
    int maxr = 0;
    for(int i = 0;i <= v;i++)
        if(dp[i] > maxr)
            maxr = dp[i];
    cout << v - maxr << endl;
    return 0;
}

#include<iostream>
#include<algorithm>
using namespace std;
const int maxn = 1010;
const int maxv = 1010;
int t[maxn],c[maxn],dp[maxv];
int main()
{
    int num,time;
    cin >> time >> num;
    for(int i = 1;i <= num;i++)
    {
        cin >> t[i] >> c[i];
    }
    for(int i = 0;i <= time;i++)
        dp[i] = 0;
    for(int i = 1;i <= num;i++)
        for(int j = time;j >= t[i];j--)
            dp[j] = max(dp[j],dp[j - t[i]] + c[i]);
    int maxr = 0;
    for(int i = 0;i <= time;i++)
        if(dp[i] > maxr)
            maxr = dp[i];
    cout << maxr << endl;
    return 0;
}

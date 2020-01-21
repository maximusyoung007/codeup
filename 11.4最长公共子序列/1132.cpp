#include <iostream>
#include<cstring>
#include<algorithm>
using namespace std;
const int maxn = 110;
char a[maxn], b[maxn];
int main()
{
    while (cin >> a >> b)
    {
        int dp[maxn][maxn] = { 0 };
        int len1 = strlen(a);
        int len2 = strlen(b);
        for (int i = 1; i <= len1; i++)
        {
            for (int j = 1; j <= len2; j++)
            {
                if (a[i-1] == b[j-1])
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                else
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
        cout << dp[len1][len2] << endl;
    }
    return 0;
}
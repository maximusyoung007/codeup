#include<cstdio>
#include<cstring>
#include<algorithm>
const int maxn = 110;
char a[maxn],b[maxn];
int dp[maxn][maxn];
int main()
{
    int n;
    while(scanf("%d",&n) != EOF)
    {
        gets(a + 1);
        gets(b + 1);
        int len_a = strlen(a + 1);
        int len_b = strlen(b + 1);
        for(int i = 0;i <= len_a;i++)
            dp[i][0] = 0;
        for(int j = 0;j < len_b;j++)
            dp[0][j] = 0;
        for(int i = 1;i <= len_a;i++)
        {
            for(int j = 1;j <= len_b;j++)
            {
                if(a[i] == b[j])
                    dp[i][j] = dp[i-1][j-1] + 1;
                else
                    dp[i][j] = std::max(dp[i-1][j],dp[i][j-1]);
            }
        }
        printf("%d\n",dp[len_a][len_b]);
    }
    return 0;
}

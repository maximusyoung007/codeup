//TK 题库答案
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
const int N = 35;
const int M = 1005;

struct Node {
	int happy, last, tail;
	bool operator < (const Node & b) const {
		return tail < b.tail;
	}
};
Node a[N];
int dp[N][M];
int main() {
	int n;
	while (scanf("%d", &n) && n > 0) {
		for (int i = 0; i < n; ++i)
			scanf("%d %d %d", &a[i].happy, &a[i].last, &a[i].tail);
		sort(a, a + n);
		memset(dp, -1, sizeof(dp));
		dp[0][0] = 0;
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < M; ++j)
				dp[i + 1][j] = dp[i][j];
			for (int j = 0; j <= a[i].tail - a[i].last; ++j)
				if (dp[i][j] >= 0)
					dp[i + 1][j + a[i].last] = max(dp[i + 1][j + a[i].last], dp[i][j] + a[i].happy);
		}
		int ans = 0;
		for (int i = 0; i < M; ++i)
			ans = max(ans, dp[n][i]);
		printf("%d\n", ans);
	}
	return 0;
}

#include <iostream>
#include<algorithm>
using namespace std;
const int maxn = 10010;
int a[maxn], dp[maxn];
int main()
{
	int n;
	while (cin >> n, n)
	{
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		dp[0] = a[0];
		for (int i = 1; i < n; i++)
			dp[i] = max(a[i], dp[i - 1] + a[i]);
		int k = 0;
		for (int i = 1; i < n; i++)
			if (dp[i] > dp[k])
				k = i;
		int sum = 0,k_ = k;
		while (sum < dp[k])
		{
			sum += a[k_];
			k_--;
		}
		if (dp[k] >= 0)
			cout << dp[k] << " " << a[k_+1] << " " << a[k] << endl;
		else
		{
			cout << "0 " << a[0] << " " << a[n - 1] << endl;
		}
	}
	return 0;
}
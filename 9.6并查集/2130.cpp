#include <iostream>
#include<algorithm>
using namespace std;
const int N = 10000005;
int father[N];
int num[N];
int find_father(int x)
{
	int a = x;
	while (x != father[x])
	{
		x = father[x];
	}
	while (a != father[a])
	{
		int z = a;
		a = father[a];
		father[z] = x;
	}
	return x;
}
void union_(int a, int b)
{
	int fa_a = find_father(a);
	int fa_b = find_father(b);
	if (fa_a != fa_b)
	{
		father[fa_a] = fa_b;
		num[fa_b] += num[fa_a];
	}
}
void init(int n)
{
	for (int i = 1; i <= n; i++)
	{
		father[i] = i;
		num[i] = 1;
	}
}
int main()
{
	int n,a,b;
	while (cin >> n)
	{
		if (n == 0)
		{
			cout << 1 << endl;
			continue;
		}
		init(10000005);
		int m = -1;
		for (int i = 0; i < n; i++)
		{
			cin >> a >> b;
			m = max(a, b);
			union_(a, b);
		}
		int max_ = 0;
		for (int i = 1; i <= m; i++)
		{
			if (max_ < num[i])
				max_ = num[i];
		}
		cout << max_ << endl;
	}
	return 0;
}

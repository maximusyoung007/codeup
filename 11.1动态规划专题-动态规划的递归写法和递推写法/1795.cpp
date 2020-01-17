#include <iostream>
using namespace std;
int f(int n)
{
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	int f0 = 0, f1 = 1;
	int result = 0;
	for (int i = 2; i <= n; i++)
	{
		result = f0 + f1;
		f0 = f1;
		f1 = result;
	}
	return result;
}
int main()
{
	int n;
	while (cin >> n)
		cout << f(n) << endl;
}

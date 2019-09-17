#include<cstdio>
#include<iostream>
using namespace std;
long long a,b,x,y;
int exgcd(long long a,long long b,long long &x,long long  &y)
{
	if(b == 0)
	{
		x = 1;
		y = 0;
		return a;
	}
	exgcd(b,a%b,x,y);
	long long temp = x;
	x = y;
	y = temp - a / b * y;
}
int main()
{
	cin >> a >> b;
	long long k = exgcd(a,b,x,y);
	printf("%d\n",(x + b) % b);
	return 0;
}

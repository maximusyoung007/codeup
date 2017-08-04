#include <iostream>
using namespace std;
int main()
{
	int s=0;
	int n;
	cin>>n; 
	for(int i=1;i<=n;i++)
	{
		s+=i;
		if(s>=((1+n)*n/2))break;//可以输出总和第一次超出某数的值 
	}
	cout<<s<<'\n';
	return 0;
}

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int i,j;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=5;)
	{
		int s=i*j;
		cout<<setw(3)<<setiosflags(ios::right)<<s;
		j++;
		if(j==6)cout<<'\n';
	}
	}
}

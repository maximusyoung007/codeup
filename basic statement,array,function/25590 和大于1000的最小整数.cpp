#include <iostream>
using namespace std;
int main()
{
	int s=0;
	int i=1;
	while(s<1000){
		s+=i;
		++i;
	}
	cout<<i-1<<'\n';
	return 0;
}

#include <iostream>
using namespace std;
int main()
{
	int i=1,s=0;
	do{
		s+=i++;
	}while(i<=100);
	cout<<s<<'\n';
	return 0;
}

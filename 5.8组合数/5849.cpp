#include<iostream>
using namespace std;
float fact(int n)
{
	float result = 1;
	for(int i = 2;i <= n;i++){
		result = result * i;
	}
	return result;
}
int main()
{
	int m,n;
	while(cin >> m >> n){
		cout << fact(m) / fact(n) / fact(m - n) << endl;
	}	
	return 0;
}

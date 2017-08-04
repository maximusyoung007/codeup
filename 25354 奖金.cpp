#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double i,award;
	cin>>i;
	if(i<=100000)award=i*0.1;
	else if(i>100000&&i<200000)award=100000*0.1+(i-100000)*0.075;
	else if(i>200000&&i<=400000)award=100000*0.1+100000*0.75+(i-200000)*0.05;
	else if(i>400000&&i<=600000)award=100000*0.1+100000*0.75+200000*0.05+(i-400000)*0.03;
	else if(i>600000&&i<=1000000)award=100000*0.1+100000*0.75+200000*0.05+200000*0.03+(i-600000)*0.015;
	else if(i>1000000)award=100000*0.1+100000*0.75+200000*0.05+200000*0.03+400000*0.015+(i-1000000)*0.01;
	cout<<setiosflags(ios::fixed)<<setprecision(2)<<award;//需要头文件#include <iomanip>
	
}

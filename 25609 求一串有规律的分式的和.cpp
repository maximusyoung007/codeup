#include<stdio.h>
int main()
{
	double rf1=1,rf2=2;
	double temp;
	double sum_part,sum_all;
	for(int i=2;i<=20;i++)
	{
		temp=rf1+rf2;
		rf1=rf2;
		rf2=temp;
		sum_part+=temp/rf1;
	}
	sum_all=sum_part+2;
	printf("%.6f",sum_all);
	return 0;
}


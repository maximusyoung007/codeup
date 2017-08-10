#include<stdio.h>
int main()
{
	int fab1=1,fab2=1;
	int n;
	int temp; 
	scanf("%d",&n);
	for(int i=2;i<n;i++)
	{
		temp=fab1+fab2;
		fab1=fab2;
		fab2=temp;
	}
	printf("%d",temp);
	return 0;
	
}

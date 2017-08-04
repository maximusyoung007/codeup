#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c;
	double r1,r2; 
	scanf("%lf%lf%lf",&a,&b,&c);
	if(a!=0&&b*b-4*a*c>0)
	{
		 r1=(-b+sqrt(b*b-4*a*c))/(2*a);
		 r2=(-b-sqrt(b*b-4*a*c))/(2*a);
	printf("r1=%7.2f\n",r1);
	printf("r2=%7.2f\n",r2);
	}
	else printf("No real roots!\n"); 
	return 0;
}

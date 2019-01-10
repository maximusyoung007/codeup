#include<stdio.h>
void swap(double *a,double *b)
{
    double t;
    t = *a;
    *a = *b;
    *b = t;
}
int main()
{
	double a,b,c,t;
	scanf("%lf %lf %lf",&a,&b,&c);
	if(a>b)swap(&a,&b);
    	if(a>c)swap(&a,&c);
    	if(b>c)swap(&b,&c);
    	printf("%0.2f %0.2lf %0.2lf\n",a,b,c);
    	return 0;
}

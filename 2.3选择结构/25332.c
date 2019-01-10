#include <stdio.h>
#include <math.h>

int main()
{
	double a,b,c,t,r1,r2;
	scanf("%lf %lf %lf",&a,&b,&c);
	t = b * b - 4 * a * c;
	if(t >= 0){
        t = sqrt(t);
        r1 = (-b + t)/(2 * a);
        r2 = (-b - t)/(2 * a);
        printf("r1=%7.2f\n",r1);
        printf("r2=%7.2f\n",r2);
	}
	else printf("No real roots!\n");
	return 0;
}

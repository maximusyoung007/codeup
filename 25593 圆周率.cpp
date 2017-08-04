#include <stdio.h>
#include<math.h>

int main()
{
	double pi=0,fac=1,den=1;
	int k=1;
	while(fabs(fac)>1e-6)
	{
		pi+=fac;
		den+=2;
		k*=-1;
		fac=k/den;
	}
	pi*=4;
	printf("PI=%10.8f\n",pi);
	return 0;
}

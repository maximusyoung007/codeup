#include<stdio.h>
int main(){
	double a,b,max,min;
	scanf("%lf%lf",&a,&b);
	if(a>b){
		max=a;
		min=b;
	}
	else {
		max=b;
		min=a;
	}
	printf("%.2f %.2f\n",min,max);
	return 0;
}

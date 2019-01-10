#include<stdio.h>
int main()
{
    float a,b;
    scanf("%f%f",&a,&b);
    if(a >= b){
        printf("%.2f %.2f\n",b,a);
    }
    else printf(".2f .2f\n",a,b);
    return 0;
}

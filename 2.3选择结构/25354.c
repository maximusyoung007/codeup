#include<stdio.h>
int main()
{
    double i,bonus;
    scanf("%lf",&i);
    if(i <= 100000)
        bonus = i * 0.1;
    else if(i > 100000 && i <= 200000)
        bonus = 10000 + (i - 100000) * 0.075;
    else if(i > 200000 && i <= 400000)
        bonus = 17500 + (i - 20000) * 0.05;
    else if(i > 400000 && i <= 600000)
        bonus = 27500 + (i - 40000) * 0.03;
    else if(i > 600000 && i <= 1000000)
        bonus = 33500 + (i - 600000) * 0.01;
    printf("%.2lf",bonus);
    return 0;
}

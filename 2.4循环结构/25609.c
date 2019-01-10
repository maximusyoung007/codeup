#include<stdio.h>
int main()
{
    double f1 = 2,f2 = 1,sum = 0,f;
    for(int i = 1;i <= 20;i++){
        f = f1 + f2;
        sum += f1/f2;
        f2 = f1;
        f1 = f;
    }
    printf("%.6f\n",sum);
    return 0;
}

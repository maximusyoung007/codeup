//when n is large,such as n > 20,it will take too much time
//yes ,it is not diedai at all
#include<stdio.h>
int x;
double y(int n)//ตÝน้
{
    if(n == 0)
        return x;
    return (y(n - 1) * 2 / 3.0 + x / (3 * y(n - 1) * y(n - 1)));
}

int main()
{
    int n;
    while(scanf("%d %d",&x,&n) != EOF)
    {
        printf("%.6lf\n",y(n));
    }
    return 0;
}

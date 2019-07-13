#include<stdio.h>
int fn(int n)
{
    if(n == 1)
        return 1;
    else if(n == 2)
        return 2;
    else
        return fn(n-1) + fn(n-2);
}
int main()
{
    int n;
    while(scanf("%d",&n) != EOF){
        printf("%d\n",fn(n));
    }
    return 0;
}

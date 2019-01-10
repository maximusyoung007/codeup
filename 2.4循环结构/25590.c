#include<stdio.h>
int main()
{
    int i = 1,sum = 0;
    while(sum <= 1000){
        sum += i;
        i++;
    }
    printf("%d\n",i - 1);
    return 0;
}

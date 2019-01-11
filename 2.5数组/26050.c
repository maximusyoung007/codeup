#include<stdio.h>
int main()
{
    int f1 = 1,f2 = 1;
    int f;
    printf("%d\n%d\n",f1,f2);
    for(int i = 3;i <= 20;i++){
        f = f1 + f2;
        printf("%d\n",f);
        f1 = f2;
        f2 = f;
    }
    return 0;
}

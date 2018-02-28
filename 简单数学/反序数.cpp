#include<cstdio>
int main()
{   int a,b,c,d,n,i;
    for(i = 1000;i <= 1111;i++){
        a = i % 10;
        b = (i / 10) % 10;
        c = (i / 100) % 10;
        d = i / 1000;
        n = a * 1000 + b * 100 + c * 10 + d;
        if(9 * i == n)printf("%d\n",i);
     }
     return 0;

}

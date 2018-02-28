#include<cstdio>
int main()
{
    int a,b,c;
    int n1,n2;
    for(a = 0;a <= 5;a++){
        for(b = 0;b <= 5;b++){
            for(c = 0;c <= 9;c++){
                n1 = a * 100 + b * 10 + c;
                n2 = b * 100 + c * 10 + c;
                if(n1 + n2 == 532)
                    printf("%d %d %d\n",a,b,c);
            }
        }
    }
    return 0;
}

//判断m的约数个数:将m开方得n，判断n之前属于m的约数个数num。
//若n为整数，则m约数个数为2*num-1，否则为num = num + 2
#include<cstdio>
#include<math.h>
int countn(int n) {
    int i;
    int num = 0;
    int a = (int) sqrt(n);
    for (i = 1; i <= a; i++) {
        if (n % i == 0)
            num = num + 1;
    }
    if (a * a == n)num = num * 2 - 1;
    else num = 2 * num;
    return num;
}
int main()
{
    int m;
    int a[1000];
    while(scanf("%d",&m),m){
        for(int i =0;i < m;i++){
            scanf("%d",&a[i]);
            printf("%d\n",countn(a[i]));
        }
    }
    return 0;
}

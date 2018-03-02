//judge how many divisor:take the square of m to n
//judge how many divisor of m before n,and record as num
//if n is integer ,divisor of m is 2*num-1,else num is 2*num
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

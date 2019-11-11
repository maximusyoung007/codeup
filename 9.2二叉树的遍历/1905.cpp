#include<iostream>
#include<cstdio>
#include<math.h>
using namespace std;
int main()
{
    int m,n;
    while(cin >> m >> n && m != 0 && n != 0){
       int layer = 0,left = m,num = 1;
       while(2 * m + 1 <= n){
            layer++;
            num += pow(2,layer);
            m = m * 2 + 1;
            left *= 2;
            if(m == n)
                break;
       }
       if(left * 2 < n){
            left = left * 2;
            num = num + (n - left + 1);
       }
       printf("%d\n",num);
    }
    return 0;
}

#include<cstdio>
#include<math.h>
const int maxn = 100010;
bool isprime(int n)
{
    if(n == 1)return false;
    int sqr = (int)sqrt(1.0 * n);
    for(int i = 2;i <= sqr;i++){
        if(n % i == 0)return false;
    }
    return true;
}
int prime[maxn],pnum = 0;
void findprime()
{
    for(int i = 1;i < maxn;i++){
        if(isprime(i) == true){
            prime[pnum++] = i;
        }
    }
}
int main()
{
    findprime();
    int n;
    while(scanf("%d",&n) != EOF){
            int countn = 0;
            for(int i = 0;prime[i] <= sqrt(n) + 1;i++){
                while(n % prime[i] == 0){
                    countn++;
                    n /= prime[i];
                }
            }
            if(n != 1)countn += 1;
            printf("%d\n",countn);
    }
}

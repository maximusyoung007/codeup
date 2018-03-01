//need too much time
#include<cstdio>
#define M 1000010
bool flag[M] = {0};
int prime[M];
void getprime()
{
    int pnum = 1;
    for(int i = 2;i < M;i++){
        if(flag[i] == false){
            prime[pnum++] = i;
            for(int j = i;j < M;j += i){
                flag[j] = true;
            }
        }
    }
}
int main()
{
    int n;
    getprime();
    while(scanf("%d",&n),n){
        int countn = 0;
        for(int i = 0,j = n - 1; prime[i] <= n / 2 && i <= j; i++ ){
            while(prime[j] > n - prime[i]) j--;
            if(prime[j] + prime[i] == n) countn ++;
        }
    printf("%d\n",countn);
    }
    return 0;
}

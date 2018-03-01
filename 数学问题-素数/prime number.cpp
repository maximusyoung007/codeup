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
int main(int argc, char *argv[])
{
    int k;
    getprime();
    prime[0] = 0;
    while(scanf("%d",&k) != EOF)
    {
        printf("%d\n",prime[k]);
    }
    return 0;
}

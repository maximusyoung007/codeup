#include<cstdio>
#include<algorithm>
using namespace std;
bool cmp(int a,int b)
{
    return a > b;
}
int main()
{
    int L,N;
    int A[601];
    while(scanf("%d%d",&L,&N) != EOF){
        for(int i = 0;i < N;i++){
            scanf("%d",&A[i]);
        }
        sort(A,A + N,cmp);
        int length = 0;
        for(int i = 0;i < N;i++)
        {
            length += A[i];
            if(length >= L){
                    printf("%d\n",i + 1);
                    break;
            }
        }if(length < L)printf("impossible\n");
    }
    return 0;
}

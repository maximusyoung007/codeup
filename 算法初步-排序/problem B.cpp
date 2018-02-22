#include<cstdio>
#include<string.h>
#include<algorithm>
using namespace std;
bool cmp(int a,int b)
{
    return a > b;
}
int main()
{
    int str[10][10];
    int b[30];
    int m;
    int i,j;
    int len;
    while(scanf("%d",&m) != EOF){
        for(i = 0;i < m;i++){
            for(j = 0;j < m;j++){
                scanf("%d",&str[i][j]);
            }
        }
        int cnt = 0;
        for(int i = 0;i < m;i++){
            int sum = 0;
            for(int j = 0;j < m;j++) sum += str[i][j];
            b[cnt++] = sum;
        }
        for(int j=0;j<m;j++){
            int sum = 0;
            for(int i = 0;i < m;i++) sum += str[i][j];
            b[cnt++] = sum;
        }
        int sum1 = 0;
        for(int i = 0;i < m;i++) sum1 += str[i][i];
        b[cnt++] = sum1;
        int sum2 = 0;
        for(int i = 0;i < m;i++) sum2 += str[i][m - 1 - i];
        b[cnt++] = sum2;
        sort(b,b + cnt,cmp);
        for(int i = 0;i < cnt;i++) printf("%d ",b[i]);
        printf("\n");
    }
}

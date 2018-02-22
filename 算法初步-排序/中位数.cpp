#include<cstdio>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
    int i,j,m;
    int middle;
    int str[10001];
    while(scanf("%d",&m) != EOF,m){
        for(i = 0;i < m;i++)
            scanf("%d",&str[i]);
//bubble sort,every time put the largest number to the rightest
        for(i = 1;i < m;i++){
            for(j = 0;j < m - i;j++){
                if(str[j] > str[j + 1]){
                    int temp = str[j];
                    str[j] = str[j + 1];
                    str[j + 1] = temp;
                }
            }
        }
        if(m % 2 == 0)middle = (str[(m - 1) / 2] + str[m / 2]) / 2;
        else if(m % 2 != 0)middle = str[(m - 1) / 2];
        printf("%d\n",middle);
    }
}

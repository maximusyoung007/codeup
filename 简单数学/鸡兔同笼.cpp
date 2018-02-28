#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    int x;
    while(scanf("%d",&n) != EOF){
        while(n--){
            scanf("%d",&x);
            int k = 0;
            int a[16384];
            if(x % 2 != 0)printf("0 0\n");
            else {
                for(int i = 0;i <= x / 2;i++){
                    for(int j = 0;j <= (x - 2 * i) / 4;j++){
                        if(2 * i + 4 * j == x)a[k++] = i + j;
                    }
                }
            sort(a,a + k);
            printf("%d %d\n",a[0],a[k - 1]);
            }
        }
    }
}

#include <cstdio>
const int maxn=1005;
double y[maxn];
int main(){
    double x;
    int n;
    while(scanf("%lf%d",&x,&n) != EOF){
        y[0] = x;
        for(int i = 0;i < n;i++) {
            y[i+1] = y[i] * 2 / 3 + x / (3 * y[i] * y[i]);
        }
        printf("%.6f\n",y[n]);
    }
    return 0;
}

#include <cstdio>
#include <math.h>
int find(int n){
    bool flag = false;
    while(!flag){
        n++;
        flag = true;
        for(int i = 2; i <= sqrt(n); i++){
            if(n % i == 0){
                flag = false;
                break;
            }
        }
    }
    return n;
}
int main(){
    int n,sushu[10002] = {0};
    sushu[0] = 2;
    while(scanf("%d",&n) != EOF){
        int k = n;
        while(sushu[k] == 0) k--;
        for(int i = k;i < n; i++){
            sushu[i + 1] = find(sushu[i]);
        }
        printf("%d\n",sushu[n - 1]);
    }
    return 0;
}

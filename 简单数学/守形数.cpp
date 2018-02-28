#include <stdio.h>
int main(){
    int n;
    while (scanf("%d", &n) != EOF){
        int ns = n * n;
        while (n > 0) {
            if (n % 10 == ns % 10){
                n /= 10;
                ns /= 10;
                if (n == 0){
                    printf("Yes!\n");
                    break;
                }
            }
            else{
                printf("No!\n");
                break;
            }
        }
    }
    return 0;
}

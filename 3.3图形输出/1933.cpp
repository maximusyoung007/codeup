#include<cstdio>
using namespace std;
int main()
{
    int h;
    while(scanf("%d",&h) != EOF){
        for(int i = 1;i <= h;i++){
            for(int j = 0;j < (h - i) * 2;j++){
                printf(" ");
            }
            for(int k = (h - i) * 2;k < h + 2 * (h - 1);k++){
                printf("*");
            }
            printf("\n");
        }
    }
}

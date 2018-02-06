#include <stdio.h>
#include <string.h>

int main()
{
    int h;
    int num;
    scanf("%d",&num);

    for(int i = 0;i < num;i++){
        scanf("%d",&h);
        for(int j = 0;j < h;j++){
            for(int k = 0;k < h - j - 1;k++){
                printf(" ");
            }
            for(int k = 0;k < h + 2 * j;k++){
                printf("*");
            }
            for(int k = 0;k < h - j - 1;k++){
                printf(" ");
            }
            printf("\n");
        }
    }
    return 0;
}

#include <cstdio>
int main()
{
    int h,wide;
    int i,j;
    while(scanf("%d",&h) != EOF){
        wide = 3 * h - 2;
        for(i = 0;i < h;i++){
            for(j = 0;j < wide;j++){
                if(j < (wide - h - 2 * i))printf(" ");
                else printf("*");
            }
            printf("\n");
        }
    }

}

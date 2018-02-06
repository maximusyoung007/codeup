#include<cstdio>
int main()
{
    int m;
    scanf("%d",&m);
    while(m--){
        int i,j;
        int h,wide;
        scanf("%d",&h);
        wide = 3 * h - 2;
        for(i = 1;i <= h;i++){
            for(j = 1;j <= wide;j++){
                if(j <= (wide - h - 2 * (i-1)) / 2)printf(" ");
                else if(j > (wide / 2 + h / 2 + (i-1)))printf(" ");
                else printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}

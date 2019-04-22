#include<stdio.h>
#include<string.h>
int main()
{
    int n,first,index;
    char str[100][100];
    while(scanf("%d",&n) != EOF){
        for(int i = 0;i < n;i++){
            scanf("%s",str[i]);
            first = 0;
            if(i < 3)
                index = i + 1;
            else
                index = 4;
            for(int j = 0;j < index;j++){
                if(first)
                    printf(" ");
                first = 1;
                printf("%d=%s",j+1,str[i-j]);
            }
            printf("\n");
        }
    }
    return 0;
}

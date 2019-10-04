#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n) != EOF){
        int temp;
        scanf("%d",&temp);
        int max = temp,min = temp;
        for(int i = 0;i < n - 1;i++){
            scanf("%d",&temp);
            if(temp > max){
                max = temp;
            }
            else if(temp < min){
                min = temp;
            }
        }
        printf("%d %d\n",max,min);
    }
    return 0;
}

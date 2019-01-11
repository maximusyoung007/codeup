#include<stdio.h>
int main()
{
    int a[12],i;
    for(i = 0;i < 9;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&a[9]);
    for(i = 9;i >= 0;i--){
        if(a[i] <= a[i - 1]){
            int t = a[i - 1];
            a[i - 1] = a[i];
            a[i] = t;
        }
        else if(a[i] > a[i - 1])break;
    }
    for(int i = 0;i < 10;i++){
        printf("%d\n",a[i]);
    }
    return 0;
}

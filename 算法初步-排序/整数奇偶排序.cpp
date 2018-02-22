#include<cstdio>
#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
bool cmp1(int a,int b)
{
    return a > b;
}
bool cmp2(int a,int b)
{
    return a < b;
}
int main()
{
    int i = 0;
    int m = 10;
    int a = 0,b = 0;
    int str[10];
    int even[10];
    int odd[10];
    for(i = 0;i < 10;i++){
        scanf("%d",&str[i]);
    }
        for(i = 0;i < 10;i++)
        {
        if(str[i] % 2 == 0)even[a++] = str[i];
        else if(str[i] % 2 != 0)odd[b++] = str[i];
        }
        sort(odd,odd + b,cmp1);
        sort(even,even + a,cmp2);
        for(i = 0;i < b;i++)
            printf("%d ",odd[i]);
        for(i = 0;i < a;i++)
            printf("%d ",even[i]);
        printf("\n");

    return 0;
}

#include<iostream>
#include<cstdio>
using namespace std;
bool cal_next_num(int a[],int n,int r)
{
    if(a[r - 1] < n){
        a[r - 1]++;
    }
    else{
        int i = 1;
        //计算第几位加1
        while(a[r - 1 - i] == n - i && (r - i) > 0){
            i++;
        }
        if(r - i == 0)//r-i=0,r-i-1=-1,超出范围
            return false;
        a[r - i - 1]++;
        while(i > 0){
            a[r - i] = a[r - i - 1] + 1;
            i--;
        }
    }
    return true;
}
int main()
{
    int n,r;
    while(~scanf("%d %d",&n,&r)){
        int a[30];
        for(int i = 0;i < r;i++){
            a[i] = i+1;
            printf("%d ",a[i]);
        }
        printf("\n");
        while(cal_next_num(a,n,r)){
            for(int i = 0;i < r;i++){
                printf("%d ",a[i]);
            }
            printf("\n");
        }
    }
    return 0;
}

#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int a[110],b[110];
int bin_search(int a[],int n,int b)
{
    int left = 0,right = n,mid;
    while(left <= right){
        mid = left + (right - left) / 2;
        if(a[mid] == b){
            return mid;
        }
        else if(a[mid] > b){
            right = mid - 1;
        }else if(a[mid] < b){
            left = mid + 1;
        }
    }
    return -1;
}
bool cmp(int a,int b)
{
    return a < b;
}
int main()
{
    int n;
    while(scanf("%d",&n) != EOF){
        for(int i = 0;i < n;i++){
            scanf("%d",&a[i]);
        }

        int m;
        scanf("%d",&m);
        sort(a,a+n,cmp);
        for(int i = 0;i < m;i++){
            scanf("%d",&b[i]);
        }

        for(int i = 0;i < m;i++){
            int index = bin_search(a,n,b[i]);
            if(index != -1)
                printf("YES\n");
            else
                printf("NO\n");
        }
    }
    return 0;
}

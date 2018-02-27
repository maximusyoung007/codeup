#include<cstdio>
int binarysearch(int A[],int left,int right,int x)
{
    int mid;
    while(left <= right){
        mid = left + (right - left) / 2;
        if(A[mid] == x)return mid;
        else if(A[mid] > x){
            right = mid - 1;
        }
        else left = mid + 1;
    }
   return -1;
}
int main()
{
    int n;
    int a[201];
    int x;
    while(scanf("%d",&n) != EOF){
        for(int i = 0;i < n;i++){
            scanf("%d",&a[i]);
        }
        scanf("%d",&x);
        printf("%d\n",binarysearch(a,0,n - 1,x));
    }
    return 0;
}

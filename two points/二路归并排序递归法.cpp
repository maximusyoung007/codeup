#include<cstdio>
const int maxn = 100;
void Merge(int a[],int l1,int r1,int l2,int r2)
{
    int i = l1,j = l2;
    int temp[maxn],index = 0;
    while(i <= r1 && j <= r2){
        if(a[i] <= a[j]){
            temp[index++] = a[i++];
        }
        else {
            temp[index++] = a[j++];
        }
    }
    while(i <= r1)temp[index++] = a[i++];
    while(j <= r2)temp[index++] = a[j++];
    for(i = 0;i < index;i++){
        a[l1 + i] = temp[i];
    }
}
void mergesort(int a[],int left,int right)
{
    if(left < right){
        int mid = left + (right - left) / 2;
        mergesort(a,left,mid);
        mergesort(a,mid + 1,right);
        Merge(a,left,mid,mid + 1,right);
    }
}
int main()
{
    int n,m;
    int a[100000];
    while(scanf("%d",&n) != EOF){
            for(int i = 0;i < n;i++){
                scanf("%d",&a[i]);
            }
                mergesort(a,0,n - 1);
                for(int i = 0;i < n;i++){
                    printf("%d\n",a[i]);
                }
            }
    return 0;
}

#include<cstdio>
#include<algorithm>
using namespace std;
int binarysearch(int a[],int left,int right,int x)
{
    int mid;
    while(left <= right){
        mid = (left + right) / 2;
        if(a[mid] == x)return mid;
        else if(a[mid] > x)right = mid - 1;
        else left = mid + 1;
    }
    return -1;
}
int main()
{
    int m,n;
    int a[101],b[101];
    while(scanf("%d",&n) !=EOF){
        for(int i = 0;i < n;i++){
            scanf("%d",&a[i]);
        }
        sort(a,a + n);
        scanf("%d",&m);
        for(int i = 0;i < m;i++){
            scanf("%d",&b[i]);
        }
        for(int i = 0;i < m;i++){
            int result = binarysearch(a,0,n - 1,b[i]);
            if(result == -1)printf("NO\n");
            else printf("YES\n");
        }
    }
    return 0;
}

#include<iostream>
using namespace std;
const int maxn = 500010;
int a[maxn];
long long num;
void merge(int a[],int L1,int R1,int L2,int R2)
{
    int i = L1,j = L2;
    int temp[maxn],index = 0;
    while(i <= R1 && j <= R2)
    {
        if(a[i] <= a[j])
        {
            temp[index++] = a[i++];
        }
        else
        {
            num += (R1 - i + 1);
            temp[index++] = a[j++];
        }
    }
    while(i <= R1)
        temp[index++] = a[i++];
    while(j <= R2)
        temp[index++] = a[j++];
    for(int i = 0;i < index;i++)
    {
        a[L1 + i] = temp[i];
    }
}
void merge_sort(int a[],int left,int right)
{
    if(left < right)
    {
        int mid = (left + right) / 2;
        merge_sort(a,left,mid);
        merge_sort(a,mid + 1,right);
        merge(a,left,mid,mid+1,right);
    }
}
int main()
{
    int n;
    while(cin >> n && n != 0)
    {
        num = 0;
        fill(a,a+maxn,0);
        for(int i = 0;i < n;i++)
        {
            cin >> a[i];
        }
        merge_sort(a,0,n-1);
        cout << num << endl;
    }
    return 0;
}

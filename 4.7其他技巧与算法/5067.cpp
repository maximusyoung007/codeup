#include<iostream>
#include<algorithm>
using namespace std;
int partation(int a[],int left,int right)
{
    int temp = a[left];
    while(left < right){
        while(left < right && a[right] > temp)right--;
        a[left] = a[right];
        while(left < right && a[left] < temp)left++;
        a[right] = a[left];
    }
    a[left] = temp;
    return left;
}
int rand_select(int a[],int left,int right,int k)
{
    if(left == right)
        return a[left];
    int p = partation(a,left,right);
    int m = p - left + 1;
    if(k == m)return a[p];
    if(k < m)
        return rand_select(a,left,p-1,k);
    else if(k > m)
        return rand_select(a,p+1,right,k-m);
}
int main()
{
    long m,n;
    while(cin >> m >> n){
        int a[101000];
        for(long i = 0;i < m;i++)
            cin >> a[i];
        cout << rand_select(a,0,m - 1,m-n+1) << endl;
    }
    return 0;
}

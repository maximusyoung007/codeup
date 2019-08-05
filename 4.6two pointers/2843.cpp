#include<cstdio>
#include<iostream>
using namespace std;
int Partition(int a[],int left,int right)
{
    int temp = a[left];
    while(left < right){
        while(left < right && a[right] > temp)
            right--;
        a[left] = a[right];
        while(left < right && a[left] <= temp)
            left++;
        a[right] = a[left];
    }
     a[left] = temp;
     return left;
}
void quick_sort(int a[],int left,int right)
{
    if(left < right)
    {
        int pos = Partition(a,left,right);
        quick_sort(a,left,pos-1);
        quick_sort(a,pos+1,right);
    }
}
int main()
{
    int n;
    while(scanf("%d",&n) != EOF){
        int a[5100];
        for(int i = 0;i < n;i++){
            cin >> a[i];
        }
        quick_sort(a,0,n-1);
        for(int i = 0;i < n;i++){
            cout << a[i] << endl;
        }
    }
}

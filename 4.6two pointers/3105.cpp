#include<iostream>
using namespace std;
const int maxn = 101000;
void merge(int a[],int low1,int high1,int low2,int high2)
{

    int i = low1,j = low2,k = 0;
    int temp[maxn];
    while(i <= high1 && j <= high2){
        if(a[i] <= a[j])
            temp[k++] = a[i++];
        if(a[i] > a[j])
            temp[k++] = a[j++];
    }
    //only run one of two following sentences
    while(i <= high1)
        temp[k++] = a[i++];
    while(j <= high2)
        temp[k++] = a[j++];
    for(i = 0;i < k;i++){
        a[low1 + i] = temp[i];
    }
}
void merge_sort(int a[],int low,int high)
{
    if(low < high){
        int mid = (low + high) / 2;

        merge_sort(a,low,mid);
        merge_sort(a,mid+1,high);
        merge(a,low,mid,mid+1,high);
    }
}
int main()
{
    int n;
    cin >> n;
    while(n--){
        int number,m,k = 0;
        cin >> m;
        int a[maxn];

        for(int i = 0;i < m;i++){
            cin >> number;
            a[k++] = number;
        }

        merge_sort(a,0,m-1);
        for(int i = 0;i < m;i++){
            cout << a[i] << endl;
        }
    }
}

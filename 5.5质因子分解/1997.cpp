#include<iostream>
using namespace std;
int count_sum(int n)
{
    int count = 0;
    for(int i = 1;i < n;i++){
        if(n % i == 0)
            count += i;
    }
    return count;
}
int main()
{
    int a[60],b[60];
    int k = 0,l = 0;
    for(int i = 2;i <= 60;i++){
        if(count_sum(i) == i){
            a[k++] = i;
        }
        else if(count_sum(i) > i){
            b[l++] = i;
        }
    }
    cout << "E: ";
    for(int i = 0;i < k;i++){
        cout << a[i] << " ";
    }
    cout << "G: ";
    for(int i = 0;i < l;i++){
        cout << b[i] << " ";
    }
    return 0;
}

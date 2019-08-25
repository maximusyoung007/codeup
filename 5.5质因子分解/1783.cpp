#include<iostream>
using namespace std;
bool is_perfect_num(int n)
{
    int a[n];
    int k = 0;
    for(int i = 1;i < n;i++){
        if(n % i == 0)
            a[k++] = i;
    }
    int result = 0;
    for(int i = 0;i < k;i++){
        result += a[i];
    }
    if(result == n)
        return true;
    return false;
}
int main()
{
    int n;
    while(cin >> n){
        int count = 0;
        int a[n];
        int k = 0;
        for(int i = 1;i <= n;i++){
            if(is_perfect_num(i)){
                 a[k++] = i;
            }
        }
        for(int i = 0;i < k - 1;i++){
            cout << a[i] << " ";
        }
        cout << a[k-1] << endl;
    }
    return 0;
}

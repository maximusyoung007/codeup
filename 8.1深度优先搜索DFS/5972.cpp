#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    while(cin >> n){
        int a[n];
        for(int i = 1;i <= n;i++){
            a[i - 1] = i;
        }
        do{
            for(int i = 0;i < n;i++){
                cout << a[i] << " ";
            }
            cout << endl;
        }while(next_permutation(a,a+n));
    }
    return 0;
}

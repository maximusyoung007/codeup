#include<iostream>
#include<math.h>
using namespace std;
bool is_prime(int n)
{
    int sqr = (int) sqrt(1.0 * n);
    for(int i = 2;i <= sqr;i++){
        if(n % i == 0){
            return false;
            break;
        }
    }
    return true;
}
int kth_prime(int k)
{
    int i = 0;
    int a = 2;
    while(i < k){
        if(is_prime(a) == true){
            i++;
        }
        a++;
    }
    return a - 1;
}
int main()
{
    int n;
    while(cin >> n){
        cout << kth_prime(n) << endl;
    }
    return 0;
}

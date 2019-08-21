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
int main()
{
    int n;
    while(cin >> n && n != 0){
        int count = 0;
        for(int i = 2;i <= n/2;i++){
            if(is_prime(i) && is_prime(n - i))
                count++;
        }
        cout << count << endl;
    }
    return 0;
}

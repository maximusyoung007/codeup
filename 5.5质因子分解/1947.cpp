#include<iostream>
#include<math.h>
using namespace std;
bool is_prime(int n)
{
    int sqr = (int)sqrt(1.0*n);
    for(int i = 2;i <= sqr;i++){
        if(n % i == 0)return false;
    }
    return true;
}
int count_prime_factor(int n)
{
    int count = 0;
    if(!is_prime(n)){
        while(!is_prime(n)){
            for(int i = 2;i <= n;i++){
                if(is_prime(i) && n % i == 0){
                    count++;
                    n /= i;
                    break;
                }
            }
        }
        count += 1;
    }
    else
        count = 1;
    return count;
}
int main()
{
    int n;
    while(cin >> n){
        int result = count_prime_factor(n);
        cout << result << endl;
    }
}

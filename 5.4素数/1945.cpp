#include<iostream>
#include<math.h>
using namespace std;
bool is_prime(int n)
{
    if(n <= 1)
        return false;
    int sqr = (int)sqrt(1.0 * n);
    for(int i = 2;i <= sqr;i++){
        if(n % i == 0)
            return false;
    }
    return true;
}
int main()
{
    int n;
    while(cin >> n){
        int count = 0;
        for(int i = 2;i < n;i++){
            if(is_prime(i) == true && i % 10 == 1){
                cout << i << " ";
                count++;
            }
        }
        if(count > 0)
            cout << endl;
        else
            cout << "-1" << endl;
    }
    return 0;
}

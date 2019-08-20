#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n;
    while(cin >> n && n != 0){
        double j = n - 1;
        double result = 0;
        for(double i = 2;i <= n;i++){
            result += 1 / i * 2 * j;
            j--;
        }
        result += n;
        printf("%.2f\n",result);
    }
    return 0;
}

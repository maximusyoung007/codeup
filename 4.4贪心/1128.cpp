#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n;
    while(cin >> n && n != 0){
        double result;
        if(n <= 4)
            result = 10;
        else if(n > 4 && n <= 8){
            result = 10 + (n - 4) * 2;
        }
        else if(n > 8){
            int rest = 0;
            if(n % 8 == 0){
                result = (n/8) * 18;
            }
            else{
                rest = n - (n/8)*8;
                if(rest <= 4){
                    result = rest * 2.4 + 18 * (n/8);
                }
                else
                    result = 18 * (n/8) + 10 + (rest - 4) * 2;
            }
        }
        if(result == (int)result)
            printf("%d\n",(int)result);
        else
            printf("%.1f\n",result);
    }
    return 0;
}

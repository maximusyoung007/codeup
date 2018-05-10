#include<stdio.h>
#include<iostream>
using namespace std;
double fact(int n)
{
    int i;
    double result = 1;
    for(i = 1;i <= n;i++){
        result *= i;
    }
    return result;
}
int main()
{
    int m,n;
    cin >> m >> n;
    int l = m - n;
    double s = fact(m) / (fact(n) * fact(l));
    cout << s << endl;
    return 0;
}

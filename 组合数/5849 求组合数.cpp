#include<iostream>
#include<stdio.h>
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
int calculate(int m,int n)
{
    return fact(m) / fact(n) / fact(m-n);
}
int main()
{
    int a,b;
    while(cin >> a >> b){
        cout << calculate(a,b) << endl;
    }
}

#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
void exchange(char a[100])
{
    int temp,i,n;
    n = strlen(a);
    for(i = 0;i < n / 2;i++){
        temp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = temp;
    }
}
int main()
{
    char a[1000];
    gets(a);
    exchange(a);
    int len = strlen(a);
    for(int i = 0;i < len;i++){
        cout << a[i];
    }
    cout << "\n";
}

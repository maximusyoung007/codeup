#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    char *a = "I love China!";
    int n;
    cin >> n;
    a = a + n;
    puts(a);
    return 0;
}

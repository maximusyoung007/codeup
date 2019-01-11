#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char *a = new char [20];
    char *b = new char[20];
    char *c = new char[20];
    char *tem = new char[20];
    cin >> a >> b >> c;
    if(strcmp(a,b) > 0)
    {
        tem = a;
        a = b;
        b = tem;
    }
    //cout << a << '\n' << b << '\n' << c << '\n';
    if(strcmp(b,c) > 0)
    {
        tem = b;
        b = c;
        c = tem;
    }
    //cout << a << '\n' << b << '\n' << c << '\n';
    if(strcmp(a,b) > 0)
    {
        tem = b;
        b = a;
        a = tem;
    }
    cout << a << '\n' << b << '\n' << c << '\n';
    return 0;
}

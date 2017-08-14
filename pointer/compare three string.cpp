#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char *a=new char [20];
    char *b=new char[20];
    char *c=new char[20];
    char *d=new char[20];
    cin>>a>>b>>c;
    int cmp1=strcmp(a,b);
    int cmp2=strcmp(a,c);
    int cmp3=strcmp(b,c);

    if(cmp1>0)
    {
        d=a;
        a=b;
        b=d;
    }
    if(cmp2>0)
    {
        d=a;
        a=c;
        c=d;
    }
    if(cmp3>0)
    {
        d=b;
        b=c;
        c=d;
    }
    cout<<a<<'\n'<<b<<'\n'<<c<<'\n';
    return 0;
}


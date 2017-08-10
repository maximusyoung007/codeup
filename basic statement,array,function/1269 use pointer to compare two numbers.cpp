#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int *p1,*p2;
    p1=&a;
    p2=&b;
    if(*p1>*p2)cout<<*p1<<" "<<*p2<<'\n';
    else cout<<*p2<<" "<<*p1<<'\n';
    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    int fib1=1,fib2=1;
    cout<<fib1<<'\n';
    cout<<fib2<<'\n';
    for(int i=3;i<=20;i++)
    {
        int fib_next=fib1+fib2;
        fib1=fib2;
        fib2=fib_next;;
        cout<<fib_next<<'\n';
    }
    return 0;
}

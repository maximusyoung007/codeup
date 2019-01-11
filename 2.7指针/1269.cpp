#include<iostream>
using namespace std;
int main()
{
    int a,b;
    int *c = &a,*d = &b;
    cin >> a >> b;
    if(*c > *d){
        cout << *c << ' ' << *d << '\n';
    }
    else{
        cout << *d << ' ' << *c << '\n';
    }
    return 0;
}

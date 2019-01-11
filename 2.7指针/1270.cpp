#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a,b,c;
    int *d = &a,*e = &b,*f = &c;
    cin >> a >> b >> c;
    if(*d < *e)swap(*d,*e);
    if(*e < *f)swap(*e,*f);
    if(*d < *e)swap(*d,*e);
    cout << *d << ' ' << *e << ' ' << *f << '\n';
    return 0;
}

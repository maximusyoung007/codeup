#include <iostream>
using namespace std;
int swap(int* p1,int *p2)
{
    int temp=*p1;
    *p1=*p2;
    *p2=temp;
}

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int *p1=&a,*p2=&b,*p3=&c;
    if(*p1<*p2)swap(p1,p2);
    if(*p1<*p3)swap(p1,p3);
    if(*p2<*p3)swap(p2,p3);
    cout<<*p1<<" "<<*p2<<" "<<*p3<<'\n';
    return 0;


}

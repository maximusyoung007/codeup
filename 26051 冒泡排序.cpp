#include <iostream>
using namespace std;
int main()
{
    int a[10];
    for(int i=0;i<=9;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<=9;i++)
    {
        for(int j=9;j>=i;j--)
    {
        if(a[j]<a[j-1])
        {
            int temp=a[j-1];
            a[j-1]=a[j];
            a[j]=temp;
        }
    }
    }
    for(int i=0;i<=9;i++)
    {
        cout<<a[i]<<'\n';
    }
    return 0;

}

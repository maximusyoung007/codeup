#include <iostream>
using namespace std;
int main()
{
    int a[10];
    for(int i=0;i<=9;i++)
    {
        cin>>a[i];
    }
    for(int j=0;j<=4;j++)
    {
        int temp=a[j];
        a[j]=a[9-j];
        a[9-j]=temp;
    }
    for(int n=0;n<=9;n++)
    {
        cout<<a[n]<<'\n';
    }
    return 0;
}

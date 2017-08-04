#include <iostream>
using namespace std;
int main()
{
    int a[10][10];
    int i,j;
    for(i=0;i<=9;i++)
        for(j=0;j<=i;j++)
    {
        if(j==0||j==i)a[i][j]=1;
        else a[i][j]=a[i-1][j-1]+a[i-1][j];
    }
    int n;
    cin>>n;
    for(i=0;i<=n-1;i++)
        for(j=0;j<=i;j++)
    {
        cout<<a[i][j]<<'\t';
        if(i==j)cout<<'\n';
    }
    return 0;
}

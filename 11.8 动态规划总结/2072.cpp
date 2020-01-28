#include<iostream>
using namespace std;
int f(int m,int n)
{
    if(m == 0 || n == 1)
        return 1;
    if(n > m)
        return f(m,m);
    else if(n <= m)
        return f(m,n - 1) + f(m - n,n);
}
int main()
{
    int t,m,n;
    cin >> t;
    for(int i = 0;i < t;i++)
    {
        cin >> m >> n;
        cout << f(m,n) << endl;
    }
    return 0;
}

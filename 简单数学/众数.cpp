#include <iostream>
using namespace std;
int main()
{
    int i,k,maxn,a[21];
    while(cin>>a[0])
    {
        maxn = 0;
        int b[11] = {0};
        for(i = 1;i < 20;i++)
            cin>>a[i];
        for(i = 0;i < 20;i++)
            b[a[i]]++;
        for(i = 1;i < 11;i++)
        {
            if(maxn < b[i])
            {
                maxn = b[i];
                k = i;
            }
        }
        cout<<k<<endl;
    }
    return 0;
}

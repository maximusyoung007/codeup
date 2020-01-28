#include<iostream>
#include<algorithm>
using namespace std;
const int maxn = 110;
int a[maxn],aleft[maxn],aright_[maxn],aright[maxn];
int dp_left[maxn],dp_right[maxn];
int main()
{
    int n,result = 0;
    while(cin >> n && n != 0)
    {
        fill(a,a + maxn,0);
        for(int i = 1;i <= n;i++)
            cin >> a[i];
        for(int i = 1;i <= n;i++)
        {
            int r_left = -1,r_right = -1;
            int k1 = 1,k2 = 1;
            for(int j = 1;j <= i;j++)
            {
                aleft[k1++] = a[j];
            }
            for(int j = i;j <= n;j++)
            {
                aright_[k2++] = a[j];
            }
            int k3 = 1;
            for(int j = k2 - 1;j >= 1;j--)
            {
                aright[k3++] = aright_[j];
            }
            for(int j = 1;j <= k1 - 1;j++)
            {
                dp_left[j] = 1;
                for(int l = 1;l < j;l++)
                {
                    if(aleft[j] > aleft[l] && dp_left[l] + 1 > dp_left[j])
                        dp_left[j] = dp_left[l] + 1;
                }
                r_left = max(r_left,dp_left[j]);
            }
            for(int j = 1;j <= k3 - 1;j++)
            {
                dp_right[j] = 1;
                for(int l = 1;l < j;l++)
                {
                    if(aright[j] > aright[l] && dp_right[l] + 1 > dp_right[j])
                        dp_right[j] = dp_right[l] + 1;
                }
                r_right = max(r_right,dp_right[j]);
            }
            fill(aleft,aleft + maxn,0);
            fill(aright,aright + maxn,0);
            if(r_left + r_right - 1 > result)
            {
                result = r_left + r_right - 1;
            }
        }
        cout << n - result << endl;
    }
    return 0;
}

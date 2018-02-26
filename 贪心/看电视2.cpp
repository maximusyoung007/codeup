//always choose the smallest right point
#include <cstdio>
#include <algorithm>
using namespace std;
struct sj
{
    int start;
    int end;
}a[100];

int compare(sj a,sj b)
{
    return a.end < b.end;
}

int main()
{
    int n,i,f,flag;
    while(scanf("%d",&n)&&n)
    {
        f = 1;
        for(i = 0;i < n;i++)
        {
            scanf("%d%d",&a[i].start,&a[i].end);
        }
        sort(a,a + n,compare);
        flag = a[0].end;
        for(i = 1;i < n;i++)
        {
            if(a[i].start >= flag)
            {
                f++;
                flag = a[i].end;
            }
        }
        printf("%d\n",f);
    }
}

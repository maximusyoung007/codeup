#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
    int i;
    char a[5],b[6];
    for(i = 1000;i <= 9999;i++)
    {
        sprintf(a,"%d",i);
        sprintf(b,"%d",i*9);
        reverse(b,b + strlen(b));
        if(!strcmp(a,b))
        printf("%d\n",i);
    }
    return 0;
}

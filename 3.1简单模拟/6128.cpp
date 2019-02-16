#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    long a,b,c;
    int n;
    scanf("%d",&n);
    for(int i = 0;i < n;i++){
        cin >> a >> b >> c;
        if(a + b > c)
            printf("Case #%d: true\n",i + 1);
        else
            printf("Case #%d: false\n",i + 1);
    }
    return 0;
}

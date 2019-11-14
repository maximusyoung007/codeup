#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    int a[10000],n,father,son,result,k = 1;
    scanf("%d",&n);
    a[1] = 1;
    for(int i = 0;i < n - 1;i++){
        cin >> father >> son;
        a[son] = a[father] + 1;
    }

    result = 1;
    for(int i = 1;i <= n;i++){
        if(a[i] > result)
            result = a[i];
    }
    printf("%d\n",result);
    return 0;
}

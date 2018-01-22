#include<cstdio>
int main()
{
    int odd,even;
    int num;
    odd=0;
    even=0;
    while(scanf("%d",&num) != EOF){
    int a[1000];
    for(int i = 0;i < num;i++){
        scanf("%d",&a[i]);
        if(a[i] % 2 == 0)even++;
        else if(a[i] % 2 != 0)odd++;
    }
    if(odd > even)printf("YES\n");
    else if(odd < even)printf("NO\n");
    }
    return 0;


}

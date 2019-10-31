#include<cstdio>
int countn,n;
void find_num(int num,int pop,int push)
{
    if(pop == 0 && push == 0){
        countn++;
    }
    if(push > 0)
        find_num(num + 1,pop,push - 1);
    if(num > 0 && pop > 0)
        find_num(num - 1,pop - 1,push);
}
int main()
{
    while(~scanf("%d",&n)){
        countn = 0;
        find_num(0,n,n);
        printf("%d\n",countn);
    }
    return 0;
}

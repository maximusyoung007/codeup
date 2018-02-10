#include<cstdio>
int main()
{
    int month[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int count;
    int y,m,d,n;
    scanf(%d,&count);
    while(count--){
        scanf("%d%d%d%d",&y,&m,&d,&n);
        if((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))count[1] = 29;
    }
}

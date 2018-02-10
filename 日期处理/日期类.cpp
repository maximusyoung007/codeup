#include<cstdio>
int main()
{
    int count;
    int y,m,d;
    int month[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    scanf("%d",&count);
    while(count--){
        scanf("%d%d%d",&y,&m,&d);
        if((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))month[1] = 29;
        d++;
        if(d == month[m - 1] + 1)
        {
            m++;
            d = 1;
        }
        if(m == 13)
        {
                y++;
                m = 1;
        }
        printf("%.4d-%.2d-%.2d\n",y,m,d);
    }
}

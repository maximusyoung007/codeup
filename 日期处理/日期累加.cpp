/*this one is not one hundred percent right,it can only calculate from this year to
 next year's February*/
#include<cstdio>
int main()
{
    int month[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int count;
    int y,m,d,n;
    scanf("%d",&count);
    while(count--){
        scanf("%d%d%d%d",&y,&m,&d,&n);
        n = n + d;
        while(n){
                if((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))month[1] = 29;
            if(n > month[m - 1]){
                n = n - month[m - 1];
                m = m + 1;
                if(m == 13){
                    y++;
                    if((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))month[1] = 29;
                    m = m - 12;
                }
            }
            else break;
        }
        printf("%.4d-%.2d-%.2d\n",y,m,n);

    }
}

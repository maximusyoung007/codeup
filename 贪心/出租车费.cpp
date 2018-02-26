#include <cstdio>
int main()
{
    int n;
    while(scanf("%d",&n),n)
    {
        double price = 0;
        if(n < 4) price = 10;
        if(n >= 4 && n <= 8) price = 10 + (n - 4) * 2;
        if(n > 8)
        {
            while(n >= 8)
            {
                price += 18;
                n -= 8;
            }

            if(n <= 4)
            {
                price += 2.4 * n;
            }
            else
            {
                price += 10 + (n - 4) * 2;
            }
        }
        if(price - (int)price == 0) printf("%d\n",(int)price);
        else printf("%.1lf\n",price);
    }
    return 0;
}

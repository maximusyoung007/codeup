#include <stdio.h>

int main()
{
    int x,y,z,n;
    while(scanf("%d",&n) != EOF){
        for(x = 0; x <= n / 5; x++)
        {
            for(y = 0; y <= (n - 5 * x) / 3; y++)
            {
                for(z = 0; z <= (n - 5 * x - 3 * y) * 3; z++)
                {
                    if(x + y + z == 100)
                    {
                        printf("x=%d,y=%d,z=%d\n",x,y,z);
                    }
                }
            }
        }
    }
    return 0;
}


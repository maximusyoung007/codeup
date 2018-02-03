#include<cstdio>
int main()
{
    int a1,a2,a3,a4num,a5;
    a1 = a2 = a3 = a4num = a5 = 0;
    float a4 = 0;
    int temp = 0;
    int num;
    scanf("%d",&num);
    int x;
    int i = 1;
    while(num--)
    {
        scanf("%d",&x);
        switch(x % 5)
        {
            case 0:if(x % 2 == 0)a1 += x;break;
            case 1:a2 += i*x;i = -i;break;
            case 2:a3++;break;
            case 3:a4num++;a4 += x;break;
            case 4:if(x > a5){temp = x;x = a5;a5 = temp;}break;
        }
    }

    a1 > 0?printf("%d ",a1):printf("N ");
    a2 != 0?printf("%d ",a2):printf("N ");
    a3 > 0?printf("%d ",a3):printf("N ");
    a4 > 0?printf("%.1f ",a4/a4num):printf("N ");
    a5 > 0?printf("%d ",a5):printf("N\n");
    return 0;

    /*float test = 3.14;
    test = test / 2;
    printf("%.1f",test);*/
}

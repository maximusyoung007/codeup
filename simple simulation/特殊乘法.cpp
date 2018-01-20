#include <cstdio>

int mul(int a,int b)
{
    int change1[10];
    int change2[10];
    int size1 = 0;
    int size2 = 0;
    while(a != 0)
    {
        change1[size1++] = a % 10;
        a /= 10;
    }
    while(b != 0)
    {
        change2[size2++] = b % 10;
        b /=10;
    }
    int product = 0;
    for(int i = 0;i < size1;i++){
        for(int j = 0;j < size2;j++){
            product += change1[i] * change2[j];
        }
    }
    return product;
}

int main()
{
    int a,b;
    while(scanf("%d %d",&a,&b) != EOF){
        printf("%d\n",mul(a,b));
    }
}

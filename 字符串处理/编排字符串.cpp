#include<cstdio>
int main()
{
    char str[101][21];
    int n,i,j;
    scanf("%d\n",&n);
    for(i = 0;i < n;i++)
    {
        gets(str[i]);
        for(j = 1;j <= i + 1;j++)
        {
            printf("%d=%s",j,str[i - j + 1]);
            if(j != i+1 && j != 4)
                printf(" ");
            if(j == 4)
                break;
        }
            printf("\n");
    }
    return 0;
}

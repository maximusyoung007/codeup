#include<cstdio>
#include<cstring>

int main()
{
    int len1,len2;
    char a[100];
    char b[100];
    while(scanf("%s%s",&a,&b) != EOF){
        int numbera = 0;
        int numberb = 0;
        len1 = strlen(a);
        len2 = strlen(b);
    for(int i = 0;i < len1;i++ )
    {
        if(a[i] <= '9' && a[i] >= '0')
        {
            numbera = numbera *10 + a[i] - '0';
        }
    }
    if(a[0] == '-')
        numbera = -numbera;
    for(int j = 0;j < len2;j++)
    {
        if(b[j] <= '9' && b[j] >= '0')
            numberb = numberb * 10 + b[j] - '0';
    }
    if(b[0] == '0')
        numberb = -numberb;
    int c = numbera + numberb;
    printf("%d",c);
    }
    return 0;
}

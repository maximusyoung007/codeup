#include <stdio.h>
int main()
{   int a,b;
    /*
    读入字符串，有两种方式：
    1.while(scanf("%s",str)!=EOF)
    2.while(gets(str)!=NULL)
    */
    while(scanf("%d%d",&a,&b)!=EOF)//c语言中使用EOF代表返回值为-1
    {
        printf("%d\n",a+b);
    }
    return 0;
}

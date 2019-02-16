#include<cstdio>
#include<string.h>
int main()
{
    char a[20],b[20];
    char da,db;
    int num1 = 0,num2 = 0;
    scanf("%s %c %s %c",a,&da,b,&db);
    for(int i = 0;i < strlen(a);i++){
        if(a[i] == da){
            num1 = num1 * 10 + (int)(da - '0');
        }
    }
    for(int i = 0;i < strlen(b);i++){
        if(b[i] == db){
            num2 = num2 * 10 + (int)(db - '0');
        }
    }
    printf("%d\n",num1 + num2);
}

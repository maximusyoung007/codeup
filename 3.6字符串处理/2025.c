#include<stdio.h>
#include<string.h>
void output(char s[]);
int main()
{
    int n;
    char a[60],b[60];
    scanf("%d",&n);
    while(n--){
        scanf("%s %s",a,b);
        if(strlen(a) > strlen(b)){
            output(a);
            printf(" is longer than ");
            output(b);
        }
        else if(strlen(a) < strlen(b)){
            output(a);
            printf(" is shorter than ");
            output(b);
        }
        else if(strlen(a) == strlen(b)){
            output(a);
            printf(" is equal long to ");
            output(b);
        }
        printf("\n");
    }
    return 0;
}
void output(char s[])
{
    for(int i = 0;i < strlen(s);i++)
        printf("%c",s[i]);
}

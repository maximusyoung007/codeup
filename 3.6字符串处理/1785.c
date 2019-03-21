#include<stdio.h>
#include<string.h>
int main()
{
    char a[110],b[110],c[220];
    while(scanf("%s %s",a,b) != EOF){
        memset(c,0,sizeof(c));
        int i,j,k;
        //a copy to c
        for(i = 0,k = 0;i < strlen(a);i++,k++)
            c[k] = a[i];
        //b copy to c
        for(j = 0,k = strlen(a);j < strlen(b);j++,k++)
            c[k] = b[j];
        //output c
        for(k = 0;k < strlen(c);k++)
            printf("%c",c[k]);
        printf("\n");
    }
    return 0;
}

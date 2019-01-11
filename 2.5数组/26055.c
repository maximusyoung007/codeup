#include<stdio.h>
#include<string.h>
int main()
{
    char str1[1000],str2[1000],str3[1000];
    int cmp1,cmp2;
    gets(str1);
    gets(str2);
    gets(str3);
    cmp1 = strcmp(str1,str2);
    if(cmp1 >= 0){
        cmp2 = strcmp(str1,str3);
        if(cmp2 >= 0)
            puts(str1);
        else
            puts(str3);
    }
    if(cmp1 < 0){
        cmp2 = strcmp(str2,str3);
        if(cmp2 >= 0)
            puts(str2);
        else
            puts(str3);
    }
    return 0;
}

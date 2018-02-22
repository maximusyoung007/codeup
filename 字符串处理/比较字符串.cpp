#include<cstdio>
#include<string.h>
int main()
{
    int n,i,j,len1,len2;
    char a[51],b[51];
    scanf("%d",&n);
    for(i = 0;i < n;i++)
    {
        scanf("%s %s",a,b);
        len1 = strlen(a);
        len2 = strlen(b);
        if(len1 == len2){
            printf("%s is equal long to %s\n",a,b);
        }
        else if(len1 > len2){
            printf("%s is longer than %s\n",a,b);
        }
        else{
            printf("%s is shorter than %s\n",a,b);
        }
    }
    return 0;
}

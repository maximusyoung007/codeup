#include<cstdio>
void pingjie(char str[],char str1[],char str2[])
{
    int i,j;
    for(i = 0;str1[i] != '\0';i++){
        str[i] = str1[i];
    }
    for(j = 0;str2[j] != '\0';j++){
        str[i + j] = str2[j];
    }
    str[i + j] = '\0';
}
int main()
{
   char a[101],b[101],c[101];
   while(scanf("%s%s",b,c) != EOF){
        pingjie(a,b,c);
        printf("%s\n",a);
   }
}

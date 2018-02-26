#include<cstdio>
#include<string.h>
char str1[10005];
char str2[10005];
bool hashtable[128];
int main()
{
    gets(str1);
    gets(str2);
    int i;
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    for(i = 0;i < len2;i++){
        hashtable[str2[i]] = true;
    }
    for(i = 0;i < len1;i++){
        if(hashtable[str1[i]] == false){
            printf("%c",str1[i]);
        }
    }
    return 0;
}

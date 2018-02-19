#include <stdio.h>
#include <string.h>
char * strchange(char *str)
{
    int i = 0;
    while(str[i]){
    if('A' <= str[i] && str[i] <= 'Z'){
        str[i] += 32;
        }
    i++;
    }
    return str;
}
int main()
{
    char deleted[1000];
    char bedeleted[1000];
    char tmp[1000];
    gets(deleted);
    strchange(deleted);
    int len = strlen(deleted);
    while(gets(bedeleted)){
        strcpy(tmp,bedeleted);
        strchange(tmp);
        int i = 0, j = 0;
        while(bedeleted[i]){
            if(bedeleted[i] == ' '){
                i++;
            }
            else if(strncmp(tmp + i,deleted,len) == 0){
                i += len;
            }
            else{
                bedeleted[j++] = bedeleted[i++];
            }
    }
                bedeleted[j] = '\0';//need end
                puts(bedeleted);
}
        return 0;
}

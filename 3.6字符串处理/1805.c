#include <string.h>
#include <stdio.h>
char str[100];
int main() {
    while(gets(str))
    {
        if(str[0] >= 'a' && str[0] <= 'z')
            str[0] -= 32;
        for(int i = 1;i < strlen(str);i++)
            if(str[i] == ' ' || str[i] == '\t' || str[i]=='\r' || str[i] == '\n')
                if(str[i + 1] >= 'a' && str[i + 1] <= 'z')
                    str[i+1] -= 32;
        puts(str);
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    gets(str);
    int length = strlen(str);
    for(int i = 0;i < length;i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] = 'z' - (str[i] - 'a');
        }
        else if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] = 'Z' - (str[i] - 'A');
        }
    }
    puts(str);
    return 0;
    printf("\n");
}

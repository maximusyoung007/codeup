#include<cstdio>
#include<string.h>
char result[1000];
//int k = 0;
void divide_two(char n[])
{
    int j = -1,temp = 0;
    int test = 1;
    while(test){
        test = 0;
        for(int i = 0;i < strlen(n);i++){
            temp = (n[i] - '0') / 2;
            test += temp;
            if(i == strlen(n) - 1)
                result[++j] = n[i] % 2 + '0';
            else
                n[i + 1] += (n[i] - '0') % 2 * 10;
            n[i] = temp + '0';
        }
    }
}
int main()
{
    char n[50];
    while(scanf("%s",n) != EOF){
        memset(result,0,sizeof(result));
        divide_two(n);
        int len = strlen(result);
        for(int i = len - 1;i >= 0;i--){
            printf("%c",result[i]);
        }
        printf("\n");
    }
}

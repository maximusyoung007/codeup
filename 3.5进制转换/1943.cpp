#include<cstdio>
#include<string.h>
char result[1000];
void divide_two(char n[])
{
    int j = -1,temp = 0;
    int test = 1;
    while(test){
        test = 0;
        for(int i = 0;i < strlen(n);i++){
            //计算余数
            temp = (n[i] - '0') / 2;
            //最终除数的每一位都应该是零
            test += temp;
            //如果是最后一位，就把这一位运算的余数装进结果数组中
            if(i == strlen(n) - 1)
                result[++j] = n[i] % 2 + '0';
            //如果不是最后一位，计算下一位被除数
            else
                n[i + 1] += (n[i] - '0') % 2 * 10;
            //计算下一次循环的除数
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

#include<cstdio>
int main(void)
{
    char str[100];
    long long tmp;
    long long data;
    int a,b;
    int i;
    while(scanf("%d%s%d",&a,str,&b) != EOF){
        data = 0;//initialize
        for(i = 0;str[i];i++){
            if(str[i] >= 'a')str[i] -= 32;//change lower case to upper
            tmp = (str[i] <= '9' && str[i] >= '0') ? str[i] - '0' : str[i] - 'A' + 10;
            //change character into number
            data = data * a + tmp;//change into decimal number
        }
        if(data == 0){
            puts("0");
            continue;//if the number is 0,do nothing
        }
        i = 0;
        while(data != 0){
            /*
            tmp = data % b;
            data /= b;
            change decimal number to other system
            */
            tmp = data % b;
            str[i] = (tmp >= 10) ? tmp - 10 + 'A' : tmp + '0';
            //change number to character,and save it in the str from 0 to i
            ++i;
            data /= b;
        }
        --i;//we add one more time at line 31,so we subtract here
        while(i >= 0){
            //output
            putchar(str[i]);
            --i;
        }
        putchar('\n');
    }
    return 0;
}

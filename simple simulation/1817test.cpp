#include <stdio.h>

 /*
 * 将一个字符串转换为整数
 * */
 int str2int(char *str){
    int ans = 0; // 储存结果
    int i = 0; // 迭代变量
    int sign = 1; // 符号，可能是负数
    if(str[0] == '-'){ // 如果最开始有个符号，则是负数，符号变号
        i++;
        sign = -1;
    }
    while(str[i]){ // 对后面的字符进行遍历
        if(str[i]>='0' && str[i]<='9'){// 如果不是逗号，则加入到计算的整数当中
            ans = ans*10 + str[i]-'0';
        }
        i++;
    }
    return sign*ans;
 }

 int main(){


    char str1[20], str2[20];
    while(scanf("%s%s", str1, str2) != EOF){ // 读入两个字符串直到文件结尾
        printf("%d\n", str2int(str1) + str2int(str2)); // 把转换结果相加并输出
 }

    return 0;
 }

/**
    作者：Sober__
    来源：CSDN
    原文：https://blog.csdn.net/Joah_Ge/article/details/80630309

    思路：写一个compare函数，用来比较s的第i个位置开始后面是否有和s1相同的字符串，
    如果有的话，将那些字符赋值为’?’，然后对i从0遍历。最后输出非问号和空格的字符

**/
#include<cstdio>
#include<cstring>
int compare(char s1[],char s[],int i){
    int j;
    for (j = 0; j < strlen(s1); j++) {
        if (s1[j] >= 'A'&&s1[j] <= 'Z') s1[j] = s1[j] + 32;   //不区分大小写，先把大写转换为小写
        if (!(s[i + j] == s1[j] || s[i + j] == s1[j] - 32)) {  //相等或者等于相应的大写字母，不相等则返回零
            return 0;
        }
    }
    for (j = 0; j < strlen(s1); j++) {  //如果存在相同的部分，赋值为'?'
        s[i + j] = '?';
    }
    return 1;
}
int main() {
    char s1[100];
    char s[10010];
    scanf("%s", s1);
    getchar();
    while (gets(s)) {
        int i = 0;
        while(s[i]!='\0'){
            if (compare(s1, s, i)) i += strlen(s1);  //如果存在，跳strlen（s1）
            else i++;  //不存在，跳1
        }
        for (i = 0; s[i] != '\0'; i++) {
            if (s[i] != '?'&&s[i] != ' ') putchar(s[i]);
        }
        printf("\n");
    }
    return 0;
}

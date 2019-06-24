#include <iostream>
#include <algorithm>
#include <cstring>
#include <stdio.h>
using namespace std;
/*
使用格式：类型strcmp（参数1，参数2）
功 能: 比较参数1和参数2
    1、若参数1>参数2,返回正数
    2、若参数1<参数2,返回负数
    3、若参数1=参数2,返回0
*/
typedef struct{
    char num[7];//数组不能开太大，不然会内存溢出,但是也不能开太小,数组有结束符，长度比字符串长度大1
    char name[9];
    int score;
}Student;

bool cmp1(Student s1,Student s2){
    return strcmp(s1.num,s2.num) < 0;
}

bool cmp2(Student s1,Student s2){
    return strcmp(s1.name,s2.name) != 0 ? strcmp(s1.name,s2.name) < 0 : strcmp(s1.num,s2.num) < 0;
}

bool cmp3(Student s1,Student s2){
    return s1.score != s2.score ? s1.score <s2.score : strcmp(s1.num,s2.num) < 0;
}

int main()
{
    Student s[100000];
    int n,c;
    int countc = 1;
    while(scanf("%d %d",&n,&c) && n != 0)
    {
        for(int i = 0; i < n; i++){
            scanf("%s %s %d",s[i].num,s[i].name,&(s[i].score));
            //printf("%s %s %d\n",s[i].num,s[i].name,s[i].score);
        }
        if(c == 1)
            sort(s,s+n,cmp1);
        else if(c == 2)
            sort(s,s+n,cmp2);
        else if(c == 3)
            sort(s,s+n,cmp3);
        printf("Case %d:\n",countc++);
        for(int i = 0; i < n;i++){
            //printf("%s ",s[i].num);
            //printf("%s ",s[i].name);
            //printf("%d",s[i].score);
            printf("%s %s %d\n",s[i].num,s[i].name,s[i].score);
        }
    }
    return 0;
}

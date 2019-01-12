#include<cstdio>
struct student{
    int num;
    char name[20];
    int score1;
    int score2;
    int score3;
}stu[100];
void input(struct student s[])
{
    int i;
    for(i = 0;i < 5;i++){
        scanf("%d %s %d %d %d",&s[i].num,s[i].name,&s[i].score1,&s[i].score2,&s[i].score3);
    }
}
void output(struct student s[])
{
    int i;
    for(i = 0;i < 5;i++){
        printf("%d %s %d %d %d\n",s[i].num,s[i].name,s[i].score1,s[i].score2,s[i].score3);
    }
}
int main()
{
    input(stu);
    output(stu);
    return 0;
}

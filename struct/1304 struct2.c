#include <stdio.h>
struct student{
    int num;
    char name[20];
    char sex;
    int age;
}stu[20];
int main()
{
    int n;
    scanf("%d",&n);

    struct student *p;

        for(p=stu;p<stu+n;p++){
        scanf("%d%s%s%d",&p->num,&p->name,&p->sex,&p->age);
        }
        for(p=stu;p<stu+n;p++){
        printf("%d%s%c%d\n",p->num,p->name,p->sex,p->age);
        }
}

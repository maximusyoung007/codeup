#include<cstdio>
#include<string.h>
#define MAXSIZE 1003
struct student {
    char id[100];
    char name[200];
    char sex[200];
    int age;
}stu[MAXSIZE];

int main()
{
    int n,m;
    int i,j;
    char search[1000];
    while(scanf("%d",&n) == 1){
    for(i = 0;i < n;i++){
        scanf("%s%s%s%d",stu[i].id,stu[i].name,stu[i].sex,&stu[i].age);
    }
    scanf("%d",&m);
    for(i = 0;i < m;i++){
        scanf("%s",search);
        for(j = 0;j < n;j++){
        if(strcmp(search, stu[j].id)==0){
            printf("%s %s %s %d\n",stu[j].id,stu[j].name,stu[j].sex,stu[j].age);
            break;
        }
    }
        if(j == n)printf("No Answer!\n");
  }
 } return 0;
}

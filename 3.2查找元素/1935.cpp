#include<cstdio>
#include<string.h>
struct s{
    char number[100];
    char name[200];
    char sex[200];
    int age;
}stu[1010];
int main()
{
    int n;
    while(scanf("%d",&n) != EOF){
        for(int i = 0;i < n;i++){
            scanf("%s %s %s %d\n",stu[i].number,stu[i].name,stu[i].sex,&stu[i].age);
        }
        int m;
        scanf("%d",&m);
        char num[1000];
        for(int i = 0;i < m;i++){
            scanf("%s",num);
            bool exist = false;
            for(int j = 0;j < n;j++){
                if(strcmp(num,stu[j].number) == 0){
                    printf("%s %s %s %d\n",stu[j].number,stu[j].name,stu[j].sex,stu[j].age);
                    exist = true;
                    break;
                }
            }
            if(exist == false)
            printf("No Answer!\n");
        }
    }
}

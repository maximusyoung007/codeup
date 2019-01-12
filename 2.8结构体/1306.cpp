#include<cstdio>
struct people1{
    int num;
    char name[10];
    char sex;
    char job;
    union {
        int class1;
        char position[10];
    }category;
}people[1000];
int main()
{
    int n;
    scanf("%d",&n);
    for(int i = 0;i < n;i++){
        scanf("%d %s %c %c",&people[i].num,people[i].name,&people[i].sex,&people[i].job);
        if(people[i].job == 's'){
            scanf("%d",&people[i].category.class1);
        }
        else if(people[i].job == 't'){
            scanf("%s",people[i].category.position);
        }
    }
    for(int i = 0;i < n;i++){
        printf("%d %s %c %c ",people[i].num,people[i].name,people[i].sex,people[i].job);
        if(people[i].job == 's'){
            printf("%d\n",people[i].category.class1);
        }
        else if(people[i].job == 't'){
            printf("%s\n",people[i].category.position);
        }
    }
    return 0;
}

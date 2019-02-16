#include <cstdio>
struct Student{
    int id;
    char name[100];
    char sex[100];
    int age;
}student[21];
int main()
{
    int i,j,n,m,number;
    scanf("%d",&m);
    while(m--){
        scanf("%d",&n);
        for(j = 0;j < n;j++){
            scanf("%d %s %s %d\n",&student[j].id,student[j].name,student[j].sex,&student[j].age);
        }
        scanf("%d",&number);
        for(j = 0;j < n;j++){
            if(student[j].id == number){
                printf("%d %s %s %d\n",student[j].id,student[j].name,student[j].sex,student[j].age);
                break;
            }
        }
    }
    return 0;
}

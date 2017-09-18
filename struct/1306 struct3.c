#include<stdio.h>
struct person{
    int num;
    char name[10];
    char sex;
    char job;
    union{
        int class1;
        char position[10];
    }category;
}person[100];
int main(){
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %s %c %c",&person[i].num,person[i].name,&person[i].sex,&person[i].job);

    if(person[i].job=='s'){
        scanf("%d",&person[i].category.class1);
    }else {
        scanf("%s",person[i].category.position);
    }
}
    for(i=0;i<n;i++){
        printf("%d %s %c %c ",person[i].num,person[i].name,person[i].sex,person[i].job);
        if(person[i].job=='s'){
        printf("%d\n",person[i].category.class1);
    }else {
        printf("%s\n",person[i].category.position);
    }
    }return 0;
}

#include <stdio.h>
struct student{
    int num;
    char name[20];
    int score1;
    int score2;
    int score3;
};

int in_put(struct student input[])
{
    int i;
    for(i=0;i<5;i++){
        scanf("%d%s%d%d%d",&input[i].num,input[i].name,
          &input[i].score1,&input[i].score2,&input[i].score3);
    }
}
int out_put(struct student output[])
{
    int i;
    for(i=0;i<5;i++){
        printf("%d %s %d %d %d\n",output[i].num,output[i].name,
               output[i].score1,output[i].score2,output[i].score3);
    }
}
int main()
{
    struct student a[100];
    in_put(a);
    out_put(a);
    return 0;
}

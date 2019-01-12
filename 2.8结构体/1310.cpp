#include<cstdio>
struct student{
    int num;
    char name[20];
    int score1;
    int score2;
    int score3;
    int ave;
}stu[100];
int main()
{
    int i,j;
    float t1 = 0,t2 = 0,t3 = 0;
    int maxn = 0;
    for(i = 0;i < 10;i++){
        scanf("%d %s %d %d %d",&stu[i].num,stu[i].name,&stu[i].score1,&stu[i].score2,&stu[i].score3);
        stu[i].ave = (stu[i].score1 + stu[i].score2 + stu[i].score3) / 3;
        if(stu[i].ave > maxn){
            maxn = stu[i].ave;
        }
        t1 += stu[i].score1;
        t2 += stu[i].score2;
        t3 += stu[i].score3;
    }
    printf("%.2f %.2f %.2f\n",t1 / 10,t2 / 10,t3 / 10);
    for(int i = 0;i < 10;i++){
        if(stu[i].ave == maxn){
            printf("%d %s %d %d %d\n",stu[i].num,stu[i].name,stu[i].score1,stu[i].score2,stu[i].score3);
        }
    }
    return 0;
}

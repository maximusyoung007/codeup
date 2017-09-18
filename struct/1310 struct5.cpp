#include <cstdio>
struct student{
    int num;
    char name[20];
    int score[3];
}stu[10];
main()
{
    int i,j,best;
    float sum,tot[3],aveg[3],aveg_score[10];
    for(i=0;i<3;i++)
    {
        tot[i]=0;
    }
    for(i=0;i<10;i++)
    {
        scanf("%d%s",&stu[i].num,&stu[i].name);
        sum=0;
        for(j=0;j<3;j++){
            scanf("%d",&stu[i].score[j]);
            tot[j]+=stu[i].score[j];//成绩相加
            sum+=stu[i].score[j];
        }
        aveg_score[i]=sum/3;
    }
    for(i=0;i<3;i++){
        aveg[i]=tot[i]/10;
        printf("%.2f ",aveg[i]);

    }printf("\n");

    best=0;
    for(i=1;i<10;i++){
        if(aveg_score[i]>aveg_score[best]){
            best=i;//记录成绩最高的数组下标
        }
    }
        printf("%d %s ",stu[best].num,stu[best].name);

    for(i=0;i<3;i++){
        printf("%d ",stu[best].score[i]);


    }printf("\n");
    return 0;
}

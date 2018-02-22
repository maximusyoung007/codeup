#include<cstdio>
#include<string.h>
#include<algorithm>
using namespace std;
struct student{
    char id[7];
    char name[9];
    int score;
}stu[100000];
bool cmp1(student a,student b)
{
    return strcmp(a.id,b.id)<0?1:0;
}
bool cmp2(student a,student b)
{
    if(!strcmp(a.name,b.name))
    return strcmp(a.id,b.id)<0?1:0;
    return strcmp(a.name,b.name)<0?1:0;
}
bool cmp3(student a,student b)
{
    if(a.score==b.score)
    return strcmp(a.id,b.id)<0?1:0;
    return a.score<b.score;
}
int main()
{
    int i,n,c,Case = 0;
    while(scanf("%d%d",&n,&c) != EOF,n){
        for(i = 0;i < n;i++){
            scanf("%s%s%d",stu[i].id,stu[i].name,&stu[i].score);
        }
        if(c == 1){
            sort(stu,stu + n,cmp1);
        }
        else if(c == 2){
            sort(stu,stu + n,cmp2);
        }
        else if(c == 3){
            sort(stu,stu + n,cmp3);
        }
        Case++;
        printf("Case %d:\n",Case);
        for(i = 0;i < n;i++){
            printf("%s %s %d\n",stu[i].id,stu[i].name,stu[i].score);
        }
    }
    return 0;
}

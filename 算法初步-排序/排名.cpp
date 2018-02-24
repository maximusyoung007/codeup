#include<cstdio>
#include<string.h>
#include<algorithm>
using namespace std;
struct student{
    char number[25];
    int score;
}stu[1005];
bool cmp(student a,student b)
{
    if(a.score != b.score)return a.score > b.score;
    return  strcmp(a.number,b.number) > 0 ? 0 : 1;
}
int main()
{
    int n,m,g,i;
    int str[15];
    int x,p;//how many problem everyone solved
    while(scanf("%d",&n),n){
        scanf("%d%d",&m,&g);
        for(i = 0;i < m;i++)
            scanf("%d",&str[i]);//intput line of each problem
        for(i = 0;i < n;i++){
            scanf("%s",&stu[i].number);
            scanf("%d",&p);
            while(p--){
                scanf("%d",&x);
                stu[i].score += str[x - 1];
            }
        }
        sort(stu,stu + n,cmp);
        int Count = 0;
        for(i = 0;i < n;i++){
            if(stu[i].score < g)break;
            Count++;
        }
        printf("%d\n",Count);
        for(i = 0;i < Count;i++)
            printf("%s %d\n",stu[i].number,stu[i].score);
    }
    return 0;
}

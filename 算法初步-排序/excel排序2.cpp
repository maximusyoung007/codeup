#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
struct STU
{
    char id[7],name[9];
    int mark;
}stu[100000];
bool cmp1(STU a,STU b)
{
    return strcmp(a.id,b.id)<0?1:0;
}
bool cmp2(STU a,STU b)
{
    if(!strcmp(a.name,b.name))
    return strcmp(a.id,b.id)<0?1:0;
    return strcmp(a.name,b.name)<0?1:0;
}
bool cmp3(STU a,STU b)
{
    if(a.mark==b.mark)
    return strcmp(a.id,b.id)<0?1:0;
    return a.mark<b.mark;
}
int main()
{
    int n,c,i,Case=0;
    while(scanf("%d%d",&n,&c)!=EOF,n)
    {
        for(i=0;i<n;i++)
            scanf("%s%s%d",stu[i].id,stu[i].name,&stu[i].mark);
        if(c==1)
            sort(stu,stu+n,cmp1);
        else if(c==2)
            sort(stu,stu+n,cmp2);
        else
            sort(stu,stu+n,cmp3);
        Case++;
            printf("Case %d:\n",Case);
            for(i=0;i<n;i++)
                printf("%s %s %d\n",stu[i].id,stu[i].name,stu[i].mark);
    }
    return 0;
}

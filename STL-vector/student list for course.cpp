#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<string.h>
using namespace std;
const int maxn = 26 * 26 * 26 * 10;
vector<int> vi[maxn];
char stu_name[3000][5];
/**int getId(char c[])
{
    int id = 0;
    for(int i = 0;i < 3;i++){
        id = id * 26 + (c[i] - 'A');
    }
    id = id * 10 + (c[3] - '0');
}**/
bool cmp(int a,int b)
{
    return strcmp(stu_name[a],stu_name[b]) < 0;
}
int main()
{
    int stu_num,course_num;
    scanf("%d %d",&stu_num,&course_num);
    int stu_id,course_id;
    int stu_course;
    for(int i = 0;i < stu_num;i++){
        scanf("%s %d",stu_name[i],&stu_course);
        for(int j = 0;j < stu_course;j++){
            scanf("%d",&course_id);
            //stu_id = getId(stu_name);
            vi[course_id].push_back(i);
        }
    }
    for(int i = 1;i <= course_num;i++){
        printf("%d %d\n",i,vi[i].size());
        sort(vi[i].begin(),vi[i].end(),cmp);
        for(int j = 0;j < vi[i].size();j++){
            printf("%s\n",stu_name[vi[i][j]]);
        }
    }
}

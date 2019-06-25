#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
/**
题目描述
今天的上机考试虽然有实时的Ranklist，但上面的排名只是根据完成的题数排序，没有考虑每题的分值，所以并不是最后的排名。
给定录取分数线，请你写程序找出最后通过分数线的考生，并将他们的成绩按降序打印。

输入
测试输入包含若干场考试的信息。每场考试信息的第1行给出考生人数N ( 0 < N < 1000 )、考题数M ( 0 < M < = 10 )、分数线（正整数）G；
第2行排序给出第1题至第M题的正整数分值；
以下N行，每行给出一名考生的准考证号（长度不超过20的字符串）、该生解决的题目总数m、以及这m道题的题号（题目号由1到M）。
当读入的考生人数为0时，输入结束，该场考试不予处理。

输出
对每场考试，首先在第1行输出不低于分数线的考生人数n，随后n行按分数从高到低输出上线考生的考号与分数，其间用1空格分隔。若有多名考生分数相同，则按他们考号的升序输出。

样例输入
3 5 32
17 10 12 9 15
CS22003 5 1 2 3 4 5
CS22004 3 5 1 3
CS22002 2 1 5
0
样例输出
3
CS22003 63
CS22004 44
CS22002 32
**/
//https://blog.csdn.net/a845717607/article/details/89428715
struct student
{
	char id[30];
	int test_num;
	int test_id[20];
	int sum;
}stu[1010];
bool cmp(student a,student b)
{
	if(a.sum == b.sum)
		return strcmp(a.id,b.id) < 0;
	return a.sum > b.sum;
}
int main()
{
	int n,score[20],point,num,person = 0;
	while(~scanf("%d",&n))
	{
		if(n == 0) break;
		scanf("%d %d",&num,&point);
		for(int i = 0;i < num;i++)
			scanf("%d",&score[i]);
		for(int i = 0;i < n;i++)
		{
			stu[i].sum = 0;
			scanf("%s %d",stu[i].id,&stu[i].test_num);
			for(int j = 0;j < stu[i].test_num;j++)
			{
				scanf("%d",&stu[i].test_id[j]);
				stu[i].sum += score[stu[i].test_id[j]-1];
			}
			if(stu[i].sum >= point)
				person++;
		}
		sort(stu,stu + n,cmp);
		printf("%d\n",person);
		for(int i = 0;i < n;i++)
		{
			if(stu[i].sum >= point)
				printf("%s %d\n",stu[i].id,stu[i].sum);
			else break;
		}
	}
	return 0;
}

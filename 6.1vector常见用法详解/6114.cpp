#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
const int maxn = 26 * 26 * 26 * 10 + 1;
int char2num(char s[])
{
	return (s[0] - 'A') * 26 * 26 * 10 + (s[1] - 'A') * 26 * 10 + (s[2] - 'A') * 10 + s[3] - '0';
}
vector<int> result[maxn];
int main()		
{
	int n,k;
	scanf("%d %d",&n,&k);
	int course_id,stu_num;
	for(int i = 0;i < k;i++){
		scanf("%d %d",&course_id,&stu_num);
		char s[5];
		for(int j = 0;j < stu_num;j++){
			scanf("%s",s);
			int stu_name = char2num(s);
			result[stu_name].push_back(course_id);
		}
	}
	char line[5];
	for(int i = 0;i < n;i++){
		scanf("%s",line);
		printf("%s ",line);
		int line_ = char2num(line);
		printf("%d ",result[line_].size());
		sort(result[line_].begin(),result[line_].end());
		for(vector<int>::iterator ib = result[line_].begin();ib != result[line_].end();ib++){
			printf("%d ",*ib);
		}
		printf("\n");
	}
	return 0;
}
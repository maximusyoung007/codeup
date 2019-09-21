#include<cstdio>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
int compare(char* name1,char* name2)
{
    for(int i = 0;i < 4;i++){
        if(name1[i] < name2[i]){
            return 1;
        }
        else if(name1[i] == name2[i]){
            continue;
        }
        else
            return 0;
    }
}
vector<char*> result[100000];
int main()
{
	int n,k;
	scanf("%d %d",&n,&k);
	for(int i = 0;i < n;i++){
        char* s = new char[5];
		scanf("%s",s);
		int num;
		scanf("%d",&num);
		for(int j = 0;j < num;j++){
			int course_id;
			scanf("%d",&course_id);
			result[course_id].push_back(s);
		}
	}
	for(int i = 1;i <= k;i++){
		int size = result[i].size();
		printf("%d %d\n", i,size);
		sort(result[i].begin(),result[i].end(),compare);
		for(vector<char*>::iterator ib = result[i].begin();ib != result[i].end();ib++){
			printf("%s\n",*ib);
		}
	}
	return 0;
}

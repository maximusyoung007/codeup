#include<string.h>
#include<cstdio>
#include<ctype.h>
#include<string>
#include<queue>
#include<map>
#include<vector>
using namespace std;
char str[100006];
string task[100000];
int in[100000];
int n;

class cmp {
	public:
	bool operator()(int a,int b) const {
		return task[a] > task[b];
	}
};

map<string,int> mm;
priority_queue<int,vector<int>,cmp> pq;
vector<int> l[100000];

int getIndex(char *s) {
	map<string,int>::iterator it=mm.find(string(s));
	if (it == mm.end()) {
		int ret = mm.size();
		task[ret] = string(s);
		mm.insert(make_pair(task[ret],ret));
		return ret;
	}
	return it -> second;
}

int main() {
	while(scanf("%d",&n) != EOF) {
		mm.clear();
		for(int i = 0;i < n;i++) l[i].clear(),in[i] = 0;
		for(int i = 0;i < n;i++) {
			scanf("%s",str);
			char *p = strtok(str,"(,)");
			int t = getIndex(p);
			while(p = strtok(NULL,"(,)")) {
				if (!strcmp(p,"NULL")) continue;
				int t1 = getIndex(p);
				l[t].push_back(t1);
				in[t1]++;
			}
		}
		for(int i = 0;i < n;i++) if (!in[i]) pq.push(i);
		int first = 1;
		while(!pq.empty()) {
			if (first)
                first = 0;
			else
                putchar(' ');
			int cur = pq.top();
			pq.pop();
			printf("%s",task[cur].c_str());
			for(int i = 0;i < l[cur].size();i++) {
				if (!--in[l[cur][i]])
                    pq.push(l[cur][i]);
			}
		}
		puts("");
	}
	return 0;
}

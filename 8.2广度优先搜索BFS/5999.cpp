//https://blog.csdn.net/qq_40073459/article/details/87195836
#include<cstdio>
#include<cstring>
#include<queue>
#include<cmath>
using namespace std;
struct state{
	int a,b,c,step;
}s,e;
int a,b,c,k;
bool f[105][105][105];

int bfs(state x){
	queue<state> q;
	q.push(x);
	f[x.a][x.b][x.c]=true;
	while(!q.empty()){
		state cur=q.front();
		q.pop();
		if(cur.a==k||cur.b==k||cur.c==k){
			return cur.step;
		}
		if(cur.a>0&&cur.b<b){     //v1->v2
		  int t=min(cur.a,b-cur.b);
		  state temp;
		  temp.a=cur.a-t;
		  temp.b=cur.b+t;
		  temp.c=cur.c;
		  temp.step=cur.step+1;
		  if(!f[temp.a][temp.b][temp.c]){
		  	q.push(temp);
		  	f[temp.a][temp.b][temp.c]=1;
		  }
		}
		if(cur.a>0&&cur.c<c){     //v1->v3
		  int t=min(cur.a,c-cur.c);
		  state temp;
		  temp.a=cur.a-t;
		  temp.b=cur.b;
		  temp.c=cur.c+t;
		  temp.step=cur.step+1;
		  if(!f[temp.a][temp.b][temp.c]){
		  	q.push(temp);
		  	f[temp.a][temp.b][temp.c]=1;
		  }
		}
		if(cur.b>0&&cur.c<c){     //v2->v3
		  int t=min(cur.b,c-cur.c);
		  state temp;
		  temp.a=cur.a;
		  temp.b=cur.b-t;
		  temp.c=cur.c+t;
		  temp.step=cur.step+1;
		  if(!f[temp.a][temp.b][temp.c]){
		  	q.push(temp);
		  	f[temp.a][temp.b][temp.c]=1;
		  }
		}
		if(cur.b>0&&cur.a<a){     //v2->v1
		  int t=min(cur.b,a-cur.a);
		  state temp;
		  temp.a=cur.a+t;
		  temp.b=cur.b-t;
		  temp.c=cur.c;
		  temp.step=cur.step+1;
		  if(!f[temp.a][temp.b][temp.c]){
		  	q.push(temp);
		  	f[temp.a][temp.b][temp.c]=1;
		  }
		}
		if(cur.c>0&&cur.a<a){     //v3->v1
		  int t=min(cur.c,a-cur.a);
		  state temp;
		  temp.a=cur.a+t;
		  temp.b=cur.b;
		  temp.c=cur.c-t;
		  temp.step=cur.step+1;
		  if(!f[temp.a][temp.b][temp.c]){
		  	q.push(temp);
		  	f[temp.a][temp.b][temp.c]=1;
		  }
		}
		if(cur.c>0&&cur.b<b){     //v3->v2
		  int t=min(cur.c,b-cur.b);
		  state temp;
		  temp.a=cur.a;
		  temp.b=cur.b+t;
		  temp.c=cur.c-t;
		  temp.step=cur.step+1;
		  if(!f[temp.a][temp.b][temp.c]){
		  	q.push(temp);
		  	f[temp.a][temp.b][temp.c]=1;
		  }
		}
	}
	return -1;//可以倒0次!!!
}
int main(){
	while(~scanf("%d%d%d%d",&a,&b,&c,&k)){
		s.a=a,s.b=0,s.c=0,s.step=0;
		memset(f,0,sizeof(f));
		int ans=bfs(s);
		if(ans==-1) printf("no\n");
        else{
        	printf("yes\n%d\n",ans);
		}
	}
	return 0;
}

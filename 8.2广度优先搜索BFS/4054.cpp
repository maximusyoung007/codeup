#include<iostream>
#include<cstring>
#include<queue>
#include<cstdio>
using namespace std;
const int maxn = 100;
struct node{
    int x;
    int y;
    int step;
}now,temp;

char maze[maxn][maxn];
int X[9] = {0,0,0,1,-1,1,1,-1,-1};
int Y[9] = {0,1,-1,0,0,1,-1,1,-1};

bool flag;

bool judge(int x,int y)
{
    if(x >= 8 || x < 0)
        return false;
    if(y >= 8 || y < 0)
        return false;
    return true;
}

void BFS()
{
    now.x = 7;
    now.y = 0;
    now.step = 0;
    queue<node> q;
    q.push(now);
    while(!q.empty()){
        now = q.front();
        q.pop();
        for(int i = 0;i < 9;i++){
            temp.x = now.x + X[i];
            temp.y = now.y + Y[i];
            temp.step = now.step + 1;
            //maze[temp.x][temp.y]表示下一步要走的位置，减去步数表示上方多少步有石头，这样走了step步后，石头就落到了下一步要走的位置
            if(judge(temp.x,temp.y) && maze[temp.x - temp.step][temp.y] != 'S' && maze[temp.x - temp.step + 1][temp.y] != 'S'){
                if(maze[temp.x][temp.y] == 'A' || temp.step > 8){
                    flag = 1;
                    return ;
                }
                q.push(temp);
            }
        }
    }
    return;
}

int main()
{
    int n;
    scanf("%d",&n);
    getchar();
    int k = 1;
    while(n--){
        flag = false;
        for(int i = 0;i < 8;i++){
            scanf("%s",maze[i]);
        }
        BFS();
        if(flag == true){
            printf("Case #%d: Yes\n",k);
        }
        else{
            printf("Case #%d: No\n",k);
        }
        k++;
    }
    return 0;
}

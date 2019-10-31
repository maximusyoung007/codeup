//参考了：https://blog.csdn.net/qq_36502291/article/details/84678224
#include<iostream>
#include<cstdio>
int startx,starty,endx,endy,m,n;
int dx[4] = {0,-1,0,1}, dy[4] = {-1,0,1,0};
bool has_no_result = true;
int a[20][20];
struct point{
    int x;
    int y;
}point[5000];
void fun(int x,int y,int num)
{
    if(x == endx && y == endy){
        for(int i = 0;i < num;i++){
            printf("(%d,%d)->",point[i].x,point[i].y);
        }
        printf("(%d,%d)\n",x,y);
        has_no_result = false;
        return;
    }
    //判断下个点是否符合条件，如果可以，就把下个点存入point中
    point[num].x = x, point[num].y = y;
    for(int i = 0;i < 4;i++){
        if(a[x + dx[i]][y + dy[i]] == 1 && 1 <= x + dx[i] <= m && 1 <= y + dy[i] <= n){
            a[x][y] = 0;//表示当前这个点已经走过了
            fun(x+dx[i],y+dy[i],num+1);
            a[x][y] = 1;
        }
    }
}
int main()
{
    while(scanf("%d %d",&m,&n) != EOF){
        for(int i = 1;i <= m;i++){
            for(int j = 1;j <= n;j++){
                scanf("%d",&a[i][j]);
            }
        }
        scanf("%d %d %d %d",&startx,&starty,&endx,&endy);
        fun(startx,starty,0);
        if(has_no_result)
            printf("-1\n");
    }
}

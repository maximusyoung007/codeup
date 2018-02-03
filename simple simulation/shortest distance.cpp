#include<cstdio>
#define MAX 100000
int compare(int a,int b)
{
    if(a > b)return b;
    else return a;
}
int abs(int a,int b)
{
    int c;
    c = a - b;
    if(c < 0)c = -c;
    return c;
}
int main()
{
    int dis[MAX];
    dis[0] = 0;
    int sum_dis = 0;
    int capacity;
    scanf("%d",&capacity);
    int temp;
    for(int i = 1;i <= capacity;i++)
    {
        scanf("%d",&temp);
        sum_dis += temp;
        dis[i+1] = dis[i] + temp;
    }
    int head,tail;
    int n;
    int distance1 = 0;
    int distance2 = 0;
    scanf("%d",&n);
    while(n > 0)
    {
        scanf("%d %d",&head,&tail);
        distance1 = abs(dis[head],dis[tail]);
        distance2 = sum_dis - distance1;
        printf("%d\n",compare(distance1,distance2));
        n--;
    }
}

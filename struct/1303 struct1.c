#include <stdio.h>
#include<string.h>
struct person{
        char name[20];
        int count;
}leader[3]={"Li",0,"Zhang",0,"Fun",0};
int main()
{
    int i,j;
    int n;
    scanf("%d",&n);
    char leader_name[20];
    for (i=0;i<n;i++)
    {
        scanf("%s",&leader_name);

    for(j=0;j<3;j++)
    {
        if(strcmp(leader_name,leader[j].name)==0)
        {
            leader[j].count++;
        }
    }
    }
    for(i=0;i<3;i++)
    {
       printf("%s:%d\n",leader[i].name,leader[i].count);
    }
    return 0;
}

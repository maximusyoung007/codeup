#include <cstdio>
#include <math.h>

int m[][2]={0,0,31,31,28,29,31,31,30,30,31,31,30,30,31,31,31,31,30,30,31,31,30,30,31,31};
int leap(int year)
{
    return((year%4==0&&year%100!=0)||(year%400==0));
}
//calculate how many days this year have
int day(int year,int month,int day)
{
    int d=0;
    int k=0;
    int i;
    if(leap(year))
        k=1;
    for(i=1;i<month;i++)
        d+=m[i][k];
    d+=day;
    return(d);
}
main()
{
    int y1,y2,m1,m2,d1,d2,day1,day2,i;
    while(scanf("%4d%2d%2d",&y1,&m1,&d1)!=EOF)
    {
        scanf("%4d%2d%2d",&y2,&m2,&d2);
        day1=day(y1,m1,d1);
        day2=day(y2,m2,d2);
        //calculate how many days in total from year 0 to now
        for(i=0;i<y1;i++)
        {
            if(leap(i))
                day1+=366;
            else
                day1+=365;
        }
            for(i=0;i<y2;i++)
        {
            if(leap(i))
                day2+=366;
            else
                day2+=365;
        }
            printf("%d\n",(int)fabs(day1-day2)+1);
    }
 }

#include<cstdio>
bool isLeapYear(int year)
{
    return ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
}
int main()
{
    int year,day;
    while(scanf("%d %d",&year,&day) != EOF){
        int dayOfMonth[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
        if(isLeapYear(year))
            dayOfMonth[2] += 1;
        int month = 1;
        while(day > dayOfMonth[month]){
            day -= dayOfMonth[month];
            month++;
        }
        printf("%04d-%02d-%02d\n",year,month,day);
    }
    return 0;
}

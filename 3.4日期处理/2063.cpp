#include<cstdio>
bool isLeapYear(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
}
int main()
{
    int m;
    scanf("%d",&m);
    for(int i = 0;i < m;i++){
        int dayOfMonth[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
        int year,month,day,add;
        scanf("%d %d %d %d",&year,&month,&day,&add);
        for(int i = 0;i < add;i++){
            if(isLeapYear(year))
                dayOfMonth[2] = 29;
            else if(!isLeapYear(year))
                dayOfMonth[2] = 28;
            day++;
            if(day > dayOfMonth[month]){
                month++;
                day = 1;
            }
            if(month > 12){
                year++;
                month = 1;
            }
        }
        printf("%04d-%02d-%02d\n",year,month,day);
    }
    return 0;
}

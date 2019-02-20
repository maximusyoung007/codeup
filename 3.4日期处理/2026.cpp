#include<cstdio>
struct Date{
    int year = 0,month = 0,day = 0;
};
bool isLeapYear(int year)
{
    return ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
}
int main()
{
    int n;
    scanf("%d",&n);
    Date d;
    for(int i = 0;i < n;i++){
        int dayOfMonth[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
        scanf("%d%d%d",&d.year,&d.month,&d.day);
        if(isLeapYear(d.year))
            dayOfMonth[2] += 1;
        d.day++;
        //printf("%d\n",d.day);
        //printf("%d\n",dayOfMonth[d.month]);
        if(d.day > dayOfMonth[d.month]){
            d.month++;
            d.day = 1;
        }
        if(d.month > 12){
            d.year++;
            d.month = 1;
        }
        printf("%04d-%02d-%02d\n",d.year,d.month,d.day);
    }
    return 0;
}

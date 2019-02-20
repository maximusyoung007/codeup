//计算到1年1月1日的天数，然后相减加1
#include<cstdio>
#include<math.h>
int dayOfMonth[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
int isLeapYear(int year)
{
    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        return 1;
    else
        return 0;
}
int main()
{
    int date1,date2;
    while(scanf("%d %d",&date1,&date2) != EOF){
        int year1 = date1 / 10000;
        int year2 = date2 / 10000;
        int month1 = date1 / 100 % 100;
        int month2 = date2 / 100 % 100;
        int day1 = date1 % 100;
        int day2 = date2 % 100;
        int sum1 = 0,sum2 = 0,result;
        for(int i = 1;i < year1;i++){
            if(isLeapYear(i) == 1)
                sum1 += 366;
            else if(isLeapYear(i) == 0)
                sum1 += 365;
        }
        for(int j = 1;j < year2;j++){
            if(isLeapYear(j) == 1)
                sum2 += 366;
            else if(isLeapYear(j) == 0)
                sum2 += 365;
        }
        if(isLeapYear(year1) == 0){
            for(int i = 1;i < month1;i++)
                sum1 += dayOfMonth[i];
        }
        else if(isLeapYear(year1) == 1){
            for(int i = 1;i < month1;i++)
                sum1 += dayOfMonth[i];
            if(month1 > 2)
                sum1 += 1;
        }
        if(isLeapYear(year2) == 0){
            for(int i = 1;i < month2;i++)
                sum2 += dayOfMonth[i];
        }
        else if(isLeapYear(year2) == 1){
            for(int i = 1;i < month2;i++)
                sum2 += dayOfMonth[i];
            if(month2 > 2)
                sum2 += 1;
        }
        sum1 += day1;
        sum2 += day2;
        if(sum1 < sum2){
            int temp = sum1;
            sum1 = sum2;
            sum2 = temp;
        }
        result = sum1 - sum2 + 1;
        printf("%d\n",result);
    }
}

#include<cstdio>
#include<string.h>
int dayOfMonth[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
int isLeapYear(int year)
{
    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        return 1;
    else
        return 0;
}
int dValue(int day1,int month1,int year1,int day2,int month2,int year2)
{
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
    return result;
}
char monthName[13][20]={
    "",
    "January",
    "February",
    "March",
    "April",
    "May",
    "June",
    "July",
    "August",
    "September",
    "October",
    "November",
    "December"
};
char weekName[7][20]={
    "Sunday",
    "Monday",
    "Tuesday",
    "Wednesday",
    "Thursday",
    "Friday",
    "Saturday"
};
int main()
{
    int d,m,y;
    char s[20];
    while(scanf("%d%s%d",&d,s,&y) != EOF) {
        for (m = 1; m <= 12; m++) {
            if(strcmp(s,monthName[m]) == 0) {
                break;//将输入字符串与月名比较得出月数
            }
        }
    int days = dValue(d,m,y,1,1,1);
    printf("%d",days);
    //printf("%d\n",days);
    puts(weekName[days % 7]);//将计算后得出的下标用7对其取模，并且保证其为非负数，则该下标极即为答案所对应的下标，输出即可
    }
    return 0;
}

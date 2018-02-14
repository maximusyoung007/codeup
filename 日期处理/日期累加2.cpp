#include<stdio.h>
 int num[2][13] = {
 0,31,28,31,30,31,30,31,31,30,31,30,31,
 0,31,29,31,30,31,30,31,31,30,31,30,31
 };
 int main()
 {
    int m;
    int year,month,day;
    int n;
    int leap;
    scanf("%d",&m);
    while(m--){
        scanf("%d%d%d%d",&year,&month,&day,&n);
        leap = 0;
        if((year%400==0)||(year%4==0&&year%100!=0)){
        leap = 1;
        }
        while(n){
        day++;
        if(day>num[leap][month]){
            day = 1;
            month++;
        }
        if(month>12){
            month = 1;
            year++;
            leap = 0;
        if((year%400==0)||(year%4==0&&year%100!=0)){
        leap = 1;
    }
 }
        n--;
 }
        printf("%04d-%02d-%02d\n",year,month,day);
 }
        return 0;
 }

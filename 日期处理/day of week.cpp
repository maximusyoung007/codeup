#include<cstdio>
#include<string.h>
int getweek(int day,int month,int year)
{
    if(month == 1 || month == 2){
        month = month + 12;
        year = year - 1;
    }

    return (day + 1 + 2 * month + 3 * (month + 1) / 5 +
           year + (year / 4) - year / 100 + year / 400) % 7;
}
int main()
{
    /*int m;
    char month[20][20] = {" ","January","February","March","April",
                          "May","June","July","August","September"
                          "October","November","December"};
    char M[20];
    while(scanf("%s",M) != EOF){
    for(int i = 0;i < 13;i++){
        if(strcmp(M,month[i]) == 0){
            m = i;
        }
        printf("%d",m);
        break;
    }
}
i have no idea why it is wrong
*/
    int month;
    int d,y;
    int w;
    char m[20];
    while(scanf("%d%s%d",&d,m,&y) != EOF){
        if(strcmp(m,"January") == 0)month = 1;
        else if(strcmp(m,"February") == 0)month = 2;
        else if(strcmp(m,"March") == 0)month = 3;
        else if(strcmp(m,"April") == 0)month = 4;
        else if(strcmp(m,"May") == 0)month = 5;
        else if(strcmp(m,"June") == 0)month = 6;
        else if(strcmp(m,"July") == 0)month = 7;
        else if(strcmp(m,"August") == 0)month = 8;
        else if(strcmp(m,"September") == 0)month = 9;
        else if(strcmp(m,"October") == 0)month = 10;
        else if(strcmp(m,"November") == 0)month = 11;
        else if(strcmp(m,"December") == 0)month = 12;
        //printf("%d",month);
        char week[7][10]={"Sunday","Monday","Tuesday","Wednesday",
                     "Thursday","Friday","Saturday"};
        printf("%s\n",week[getweek(d,month,y)]);
    }
        return 0;
}



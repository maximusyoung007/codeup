#include<cstdio>
 #include<iostream>
 #include<string>
 using namespace std;

 int weekday(int d,int m,int y)
 {
    int tm=m>=3?(m-2):(m+10);
    int ty=m>=3?y:(y-1);
    return (ty+ty/4-ty/100+ty/400+(int)(2.6*tm-0.2)+d)%7;
 }

 int main()
 {
    char week[][10]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
    int d,y,m;
    string M;
    while(cin>>d>>M>>y)
    {
        if(M=="January")
            m=1;
        else if(M=="February")
            m=2;
        else if(M=="March")
            m=3;
        else if(M=="April")
            m=4;
        else if(M=="May")
            m=5;
        else if(M=="June")
            m=6;
        else if(M=="July")
            m=7;
        else if(M=="August")
            m=8;
        else if(M=="September")
            m=9;
        else if(M=="October")
            m=10;
        else if(M=="November")
            m=11;
        else if(M=="December")
            m=12;
        printf("%s\n",week[weekday(d,m,y)]);
 }
 return 0;
 }

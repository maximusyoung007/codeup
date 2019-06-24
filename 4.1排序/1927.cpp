#include<iostream>
#include<cstdio>
#include<string.h>
#include<algorithm>
using namespace std;
bool cmp(char a,char b)
{
    return a < b;
}
int main()
{

    char a[201];
    //gets可以接受空格
    while(gets(a)){
        int len = strlen(a);
        sort(a,a+len,cmp);
        for(int i = 0;i < len;i++){
            printf("%c",a[i]);
        }
        cout << endl;
    }
}


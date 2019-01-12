#include<cstdio>
#include<iostream>
#include<string.h>
using namespace std;
struct person{
    char name[20];
    int count;
}leader[3] = {"Li",0,"Zhang",0,"Fun",0};
int main()
{
    int i,j,n;
    cin >> n;
    char name[20];
    for(i = 0;i < n;i++){
        scanf("%s",name);
        for(j = 0;j < 3;j++){
            if(strcmp(name,leader[j].name) == 0)
                leader[j].count++;
        }
    }
    for(i = 0;i < 3;i++){
        cout << leader[i].name << ":" << leader[i].count << '\n';
    }
}

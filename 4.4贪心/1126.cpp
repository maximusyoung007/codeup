/*
题目描述
暑假到了，小明终于可以开心的看电视了。但是小明喜欢的节目太多了，他希望尽量多的看到完整的节目。
现在他把他喜欢的电视节目的转播时间表给你，你能帮他合理安排吗？
输入
输入包含多组测试数据。每组输入的第一行是一个整数n（n<=100），表示小明喜欢的节目的总数。
接下来n行，每行输入两个整数si和ei（1<=i<=n），表示第i个节目的开始和结束时间，为了简化问题，每个时间都用一个正整数表示。
当n=0时，输入结束。
输出
对于每组输入，输出能完整看到的电视节目的个数
样例输入
12
1 3
3 4
0 7
3 8
15 19
15 20
10 15
8 18
6 12
5 10
4 14
2 9
0
样例输出
5
*/
#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
typedef struct{
    int si;
    int ei;
}Time;
bool cmp(Time t1,Time t2)
{
    return t1.ei < t2.ei;
}
int main()
{
    Time time[100];
    int n;
    while(cin >> n && n != 0){
        for(int i = 0;i < n;i++){
            cin >> time[i].si >> time[i].ei;
        }
        sort(time,time+n,cmp);
        int temp = time[0].ei;
        int sum = 1;
        for(int i = 1;i < n;i++){
            if(temp <= time[i].si){
                sum++;
                temp = time[i].ei;
            }
        }
        cout << sum << endl;
    }
    return 0;
}

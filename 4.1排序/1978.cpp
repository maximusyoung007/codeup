#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
/**
    题目描述
请写一个程序，对于一个m行m列的（1<m<10）的方阵，求其每一行，每一列及主对角线元素之和，最后按照从大到小的顺序依次输出。

输入
共一组数据，输入的第一行为一个正整数，表示m，接下来的m行，每行m个整数表示方阵元素。

输出
从大到小排列的一行整数，每个整数后跟一个空格，最后换行。

样例输入
4
15 8 -2 6
31 24 18 71
-3 -9 27 13
17 21 38 69

样例输出
159 145 144 135 81 60 44 32 28 27
**/
/*
注意点：1.数组开大点
    2.题目有坑，主副对角线都要计算
    3.有多组数据
*/
bool cmp(int a,int b)
{
    return a > b;
}
int main()
{
    int m;
	while(cin >> m){
	    if(m >= 10 || m <= 1)
            break;
        int n=0,i,j,a[20][20],sum,num[22];
        for(i = 0;i < m;i++)
        {
            for(j = 0;j < m;j++)
            {
                cin >> a[i][j];
            }
        }
        //行
        for(i = 0;i < m;i++)
        {
            sum = 0;
            for(j = 0;j < m;j++)
            {
                sum += a[i][j];
            }
            num[n++] = sum;
        }
        //列
        for(j = 0;j < m;j++)
        {
            sum = 0;
            for(i = 0;i < m;i++)
            {
                sum += a[i][j];
            }
            num[n++] = sum;
        }
        //主对角线
        sum = 0;
        for(i = 0,j = 0;i < m;i++,j++)
        {
            sum += a[i][j];
        }
        num[n++] = sum;
        //副对角线
        sum = 0;
        for(i = 0,j = m - 1;i < m;i++,j--)
        {
            sum += a[i][j];
        }
        num[n++] = sum;
        sort(num,num+n,cmp);
        for(i = 0;i < n;i++)
            cout << num[i] << " ";
        cout << endl;
	}
	return 0;
}

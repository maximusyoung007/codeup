#include<iostream>
using namespace std;
const int maxn = 40010;
int table[maxn];
int table100[maxn];
int main()
{
    int t;
    cin >> t;
    for(int i = 0;i < t;i++)
    {
        cout << "Case " << i + 1 << ":" << endl;
        fill(table,table + maxn,0);
        fill(table100,table100 + maxn,0);
        int n;
        cin >> n;
        int temp;
        for(int j = 1;j <= n;j++)
        {
            cin >> temp;
            table[j] = temp;
            table100[j / 100] += temp;
        }
        string s;
        int a,b;
        while(cin >> s && s != "End")
        {
            cin >> a >> b;
            if(s == "Query")
            {
                int sum = 0;
                if(b - a <= 200)
                {
                    for(int j = a;j <= b;j++)
                    {
                        sum += table[j];
                    }
                }
                else
                {
                    //a和b中间的几个100
                    for (int j = a / 100 + 1; j < b / 100; j++)
                        sum += table100[j];
                    //a左边的部分
					for (int j = a; j <= (a / 100) * 100 + 99; j++)
                        sum += table[j];
                    //a右边的部分
					for (int j = (b / 100) * 100; j <= b; j++)
                        sum += table[j];
                }
                cout << sum << endl;
            }
            else if(s == "Add")
            {
                table[a] += b;
                table100[a/100] += b;
            }
            else if(s == "Sub")
            {
                table[a] -= b;
                table100[a/100] -= b;
            }
        }
    }
    return 0;
}

#include<iostream>
#include<string.h>
using namespace std;
int a[100010],b[100010];
int main()
{
    int n;
    while(cin >> n){
        for(int i = 0;i < n;i++)
        {
            int temp;
            cin >> temp;
            a[temp]++;//哈希
            b[i] = temp;//按顺序存数
        }
        int j;
        for(j = 0;j < n;j++)
        {
            if(a[b[j]] == 1){
                cout << b[j] << endl;
                break;
            }
        }
        if(j == n)
            cout << "None" << endl;
        memset(a,0,sizeof(int)*10001);
        memset(b,0,sizeof(int)*10001);
    }
    return 0;
}

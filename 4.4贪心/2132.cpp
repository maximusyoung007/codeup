#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
bool cmp(int a,int b)
{
    return a > b;
}
int main()
{
    long long l;
    int n;
    while(cin >> l >> n){
        int block[610];
        for(int i = 0;i < n;i++){
            cin >> block[i];
        }
        sort(block,block+n,cmp);
        int repair = 0;
        int j;
        for(j = 0;j < n;j++){
            repair += block[j];
            if(repair > l){
                cout << j + 1 << endl;
                break;
            }
        }
        if(j == n)
            cout << "impossible" << endl;
    }
    return 0;
}

#include<iostream>
#include<algorithm>
using namespace std;
bool cmp(int a,int b)
{
    return a < b;
}
int main()
{
    int m;
    cin >> m;
    while(m-- > 0){
        int n;
        cin >> n;
        if(n % 2 != 0){
            cout << "0 0" << endl;
        }
        else if(n % 4 == 0){
            cout << n / 4 << " " << n / 2 << endl;
        }
        else if(n % 2 == 0){
            cout << n / 4 + 1 << " " << n / 2 << endl;
        }
    }
    return 0;
}

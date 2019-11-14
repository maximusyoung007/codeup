#include<iostream>
#include<cstdio>
#include<math.h>
using namespace std;
int main()
{
    int n,a[1100],line;
    while(cin >> n && n != 0){
        for(int i = 1;i <= n;i++){
            cin >> a[i];
        }
        cin >> line;
        int aStart = pow(2,line-1);
        int aEnd = pow(2,line) - 1;
        if(n < aStart){
            cout << "EMPTY" << endl;
        }
        else if (aStart <= n && n <= aEnd){
            for(int i = aStart;i <= n;i++){
                cout << a[i] << " ";
            }
            cout << endl;
        }
        else if(n > aEnd){
            for(int i = aStart;i <= aEnd;i++){
                cout << a[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}

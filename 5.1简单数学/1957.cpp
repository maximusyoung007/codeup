#include<iostream>
using namespace std;
int main()
{
    int n;
    while(cin >> n){
        for(int i = 0;i <= (n/5);i++){
            for(int j = 0;j <= (n - 5 * i) / 3;j++){
                for(int k = 0;k <= (n - 5 * i - 3 * j) * 3;k++){
                    if(i + j + k == 100){
                        cout << "x=" << i << ",y=" << j << ",z=" << k << endl;
                    }
                }
            }
        }
    }
    return 0;
}

#include<iostream>
using namespace std;
int main()
{
    int n;
    while(cin >> n){
        int a[5];
        a[0] = n / 50;
        a[1] = (n - a[0] * 50) / 20;
        a[2] = (n - a[0] * 50 - 20 * a[1]) / 10;
        a[3] = (n - a[0] * 50 - 20 * a[1] - a[2] * 10) / 5;
        a[4] = n - a[0] * 50 - a[1] * 20 - a[2] * 10 - a[3]*5;
        int count = 0;//calculate the number of "+"
        for(int i = 0;i < 5;i++){
            if(a[i] != 0)
                count++;
        }
        int b[5] = {50,20,10,5,1};
        for(int i = 0;i < 5;i++){
            if(a[i] != 0){
                if(count > 1){
                     cout << b[i] << "*" << a[i] << "+";
                     count--;
                }
                else
                    cout << b[i] << "*" << a[i] << endl;
            }
        }
    }
    return 0;
}

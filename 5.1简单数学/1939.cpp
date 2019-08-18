#include<iostream>
//n bigger than 2 and smaller than 100,so only discuss last two figures
using namespace std;
int main()
{
    int n;
    while(cin >> n){
        int result = 0;
        int m = n * n;
        for(int i = 0;i < 2;i++){
            int last = m % 10;
            result = last;
            if(result == n){
                cout << "Yes!" << endl;
                break;
            }
            if(i == 1){
                m = m / 10;
                int last2 = m % 10;
                result = last2 * 10 + last;
                if(result == n){
                    cout << "Yes!" << endl;
                    break;
                }
            }
        }
        if(result != n){
            cout << "No!" << endl;
        }
    }
    return 0;
}

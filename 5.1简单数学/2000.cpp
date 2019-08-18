#include<iostream>
using namespace std;
int main()
{
    int m;
    cin >> m;
    while(m-- > 0){
        int n;
        cin >> n;
        int result = 0;
        if(n >= 0){
            for(int i = n;i <= 2 * n;i++){
                result += i;
            }
        }
        if(n < 0){
            for(int i = 2 * n;i <= n;i++){
                result += i;
            }
        }
        cout << result << endl;
    }
}

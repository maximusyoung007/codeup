#include <iostream>
using namespace std;
int main(){
    int m, a, b;
    while(cin>>m){
        if (!m) break;
        cin >> a >> b;
        unsigned int sum = a + b;
        int ans[32],i = 0;
        do{
            ans[i++] = sum % m;
            sum /= m;
        }while(sum != 0);
        for(int j = i -1;j >= 0;j--)
            cout << ans[j];
        cout << endl;
    }
    return 0;
}

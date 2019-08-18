#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int m;
    cin >> m;
    while(m-- > 0){
        int n,x,result = 0;
        cin >> n;
        int a[11];
        for(int i = 0;i <= n;i++){
            cin >> a[i];
        }
        cin >> x;
        for(int i = 0;i <= n;i++){
            int temp_result = a[i] * pow(x,i);
            result += temp_result;
        }
        cout << result << endl;
    }
    return 0;
}

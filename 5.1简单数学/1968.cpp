#include<iostream>
#include<map>
using namespace std;
int main()
{
    int n;
    while(cin >> n){
        int a[11] = {0};
        a[n]++;
        int temp;
        for(int i = 1;i < 20;i++){
            cin >> temp;
            a[temp]++;
        }
        //result:index , a[result]:maxValue
        int result = 0;
        for(int i = 1;i <= 10;i++){
           if(a[i] > a[result]){
                a[result] = a[i];
                result = i;
           }
        }
        cout << result << endl;
    }
    return 0;
}

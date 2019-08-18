#include<iostream>
using namespace std;
int judge_seven(int i)
{
    if(i % 7 == 0)
        return 1;
    int a = i % 10;
    int b = i / 10;
    if(a == 7 || b == 7)
        return 1;
    return 0;
}
int main()
{
    int n;
    while(cin >> n){
        int result = 0;
        for(int i = 1;i <= n;i++){
            if(i % 7 == 0 || judge_seven(i) == 1)
                continue;
            else{
                result += i * i;
            }
        }
        cout << result << endl;
    }
}

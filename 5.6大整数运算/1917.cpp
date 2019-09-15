#include<iostream>
#include<string.h>
using namespace std;
struct bign{
    int a[3000];
    int len;
    bign() {
        memset(a,0,sizeof(a));
        len = 0;
    }
};
bign multi(bign a,int b)
{
    bign c;
    int carry = 0;
    for(int i = 0;i < a.len;i++){
        int temp = a.a[i] * b + carry;
        c.a[c.len++] = temp % 10;
        carry = temp / 10;
    }
    while(carry != 0){
        c.a[c.len++] = carry % 10;
        carry /= 10;
    }
    return c;
}
bign change(int x)
{
    bign a;
    while(x){
        a.a[a.len++] = x % 10;
        x /= 10;
    }
    return a;
}
void print(bign a)
{
    for(int i = a.len - 1;i >= 0;i--){
        cout << a.a[i];
    }
}
int main()
{
    int n;
    while(cin >> n){
        if(n != 0){
            bign result = change(n);
            for(int i = 1;i < n;i++){
                result = multi(result,i);
            }
            print(result);
            cout << endl;
        }
        else
            cout << "1" << endl;
    }
    return 0;
}

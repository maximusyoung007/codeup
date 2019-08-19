#include<iostream>
using namespace std;
int gcb(int a,int b)
{
    return !b ? a :gcb(b,a % b);
}
int lcm(int a,int b)
{
    return a / gcb(a,b) * b;
}
int main()
{
    int m;
    cin >> m;
    while(m-- > 0){
        int n;
        cin >> n;
        int temp2 = 1;
        for(int i = 0;i < n;i++){
            int temp1;
            cin >> temp1;
            temp2 = lcm(temp1,temp2);
        }
        cout << temp2 << endl;
    }
    return 0;
}

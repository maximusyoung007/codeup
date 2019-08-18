#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    for(a = 0;a <= 9;a++){
        for(b = 0;b <= 9;b++){
            for(c = 0; c <= 9;c++){
                int factor1 = a * 100 + b * 10 + c;
                int factor2 = b * 100 + c * 10 + c;
                int result = factor1 + factor2;
                if(result == 532)
                    cout << a << " " << b << " " << c << endl;
            }
        }
    }
    return 0;
}

#include<iostream>
using namespace std;
int main()
{
    for(int a = 0;a <= 9;a++){
        for(int b = 0;b <= 9;b++){
            for(int c = 0;c <= 9;c++){
                int addend1 = a * 100 + b * 10 + c;
                int addend2 = b * 100 + c * 10 + c;
                if(addend1 + addend2 == 532){
                    cout << a << " " << b << " " << c << endl;
                }
            }
        }
    }
    return 0;
}

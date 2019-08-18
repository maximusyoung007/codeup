#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for(i = 1000;i < 1113;i++){
        int result = 0;
        int temp = i;//use to save the value of i
        for(j = 0;j < 4;j++){
            int index = temp % 10;
            result = result * 10 + index;
            temp = temp / 10;
        }
        if(result == i * 9)
            cout << i << endl;
    }
    return 0;
}

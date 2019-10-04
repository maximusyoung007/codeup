#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string.h>
using namespace std;
int main()
{
    char c[10];
    while(gets(c)){
        int len = strlen(c);
        do{
            for(int i = 0;i < len;i++){
                cout << c[i];
            }
            cout << endl;
        }while(next_permutation(c,c + len));
        cout << endl;
    }
}

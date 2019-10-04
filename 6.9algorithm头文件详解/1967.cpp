#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    while(getline(cin,s)){
        int len = s.length();
        for(int i = len - 1;i >= 0;i--){
            cout << s[i];
        }
        cout << endl;
    }
    return 0;
}

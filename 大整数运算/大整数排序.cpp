#include<cstdio>
#include<string.h>
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
bool cmp(string str1,string str2)
{
    if(str1.length() == str2.length()){
        return str1 < str2;//string can compare directly
    }
    else
    {
        return str1.length() < str2.length();
    }
}
int main()
{
    int n;
    cin >> n;
    vector<string> a;
    string str;
    for(int i = 0;i < n;i++){
        cin >> str;
        a.push_back(str);
    }
    sort(a.begin(),a.end(),cmp);
    for(int i = 0;i < n;i++){
        cout << a[i] << '\n';
    }
    a.clear();
    return 0;
}

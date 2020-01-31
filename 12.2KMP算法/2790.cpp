#include<iostream>
#include<string.h>
#include<string>
#include<cstdio>
using namespace std;
int next_[300];
void get_next(string s, int len)
{
    int j = -1;
    next_[0] = -1;
    for (int i = 1; i < len; i++)
    {
        while (j != -1 && s[i] != s[j + 1])
        {
            j = next_[j];
        }
        if (s[i] == s[j + 1])
        {
            j++;
        }
        next_[i] = j;
    }
}
int kmp(string text, string pattern)
{
    int n = text.length();
    int m = pattern.length();
    get_next(pattern, m);
    int ans = 0, j = -1;
    for (int i = 0; i < n; i++)
    {
        while (j != -1 && text[i] != pattern[j + 1])
        {
            j = next_[j];
        }
        if (text[i] == pattern[j + 1])
        {
            j++;
        }
        if (j == m - 1)
        {
            ans++;
            j = next_[j];
        }
    }
    return ans;
}
int main()
{
    int sum = 0, result, n;
    cin >> n;
    string p, s;
    //一定要有这一行，原因未明
    getchar();
    getline(cin, p);
    for (int i = 0; i < n; i++)
    {
        result = 0;
        getline(cin, s);
        result = kmp(s, p);
        sum += result;
    }
    cout << sum << endl;
    return 0;
}
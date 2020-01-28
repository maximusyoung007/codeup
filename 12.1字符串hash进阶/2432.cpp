//取出比较短的那个字符串的所有子串，比较是否是比较长的那个字符串的子串
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
string result;
void getMaxSubString(string s1,string s2)
{
    string max_ = "",min_ = "";
    int res_len = 0;
    max_ = (s1.length() >= s2.length()) ? s1 : s2;
    min_ = (max_ == s1) ? s2 : s1;
    for(int i = 0;i < min_.length();i++)
    {
        for(int j = i;j < min_.length();j++)
        {
            string temp = min_.substr(i,min_.length() - j);
            if(max_.find(temp) != string::npos && temp.length() > res_len)
            {
                result = temp;
                res_len = temp.length();
            }
        }

    }
}
int main()
{
    string s1,s2;
    cin >> s1 >> s2;
    getMaxSubString(s1,s2);
    cout << result << endl;
}

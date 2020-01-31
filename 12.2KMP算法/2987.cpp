//https://blog.csdn.net/qq_36502291/article/details/89220606
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main() {
    string s, str;
    getline(cin, str);
    getline(cin, s);
    int num = 0, start, len = str.length();
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    s = " " + s;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' '&& s[i + len + 1] == ' ' && i + len < s.length()) {
            string ss = s.substr(i + 1, len);
            if (ss == str)
                if (num++ == 0)
                    start = i;
            i += len;
        }
    }
    if (num)
        cout << num << " " << start << endl;
    else
        cout << -1 << endl;
    return 0;
}

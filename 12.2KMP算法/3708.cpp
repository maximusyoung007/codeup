#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s, p;
    while (cin >> s >> p)
    {
        int num = 0;
        while (s.length() >= p.length())
        {
            if (s.find(p) != string::npos)
            {
                num++;
                s.erase(s.find(p), p.length());
            }
            else
                break;
        }
        if (num != 0)
            cout << num << endl;
        else
            cout << 0 << endl;
    }
    return 0;
}


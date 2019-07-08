#include<iostream>
#include<algorithm>
#include<set>
#include<vector>
#include<string.h>
using namespace std;
//开大数组最好开成全局变量，可以有效规避内存溢出的问题。开成局部变量，存放在栈区，栈区内存太少容易溢出
int result[2000][2000];
int main()
{
    int m;
    cin >> m;
    while(m--){
        int n;
        set<int>a_;
        set<int>b_;
        vector<int> a,a2;
        vector<int> b,b2;
        cin >> n;
        for(int i = 0;i < n;i++)
        {
            int temp;
            cin >> temp;
            a.push_back(temp);
        }
        for(int j = 0;j < n;j++)
        {
            int temp2;
            cin >> temp2;
            b.push_back(temp2);
        }
        //用result记录每个数在对应分组的数目
        for(int i = 0;i < n;i++){
            result[b[i]][a[i]]++;
        }
        //用set记录数和分组，进行去重和排序
        for(int i = 0;i < n;i++){
            a_.insert(a[i]);
        }
        for(int i = 0;i < n;i++){
            b_.insert(b[i]);
        }
        //将set的值存入vector，方便循环，因为set只能迭代器循环
        set<int>::iterator it;;
        for(it = a_.begin();it != a_.end();it++){
            a2.push_back(*(it));
        }
        for(it = b_.begin();it != b_.end();it++){
            b2.push_back(*(it));
        }
        //按格式输出result数组
        for(int i = 0;i < b2.size();i++){
            cout << b2[i] << "={";
            for(int j = 0;j < a2.size();j++){
                cout << a2[j] << "=" << result[b2[i]][a2[j]];
                if(j != a2.size() - 1)
                    cout << ",";
                else if(j == a2.size() - 1)
                    cout << "}";
            }
            cout << endl;
        }
        a.clear();
        b.clear();
        a_.clear();
        b_.clear();
        a2.clear();
        b2.clear();
        memset(result, 0, sizeof(result));
    }
    return 0;
}

#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
int main()
{
    vector<int> result_;
    int result;
    int n;
    while(cin >> n)
    {
        result_.clear();
        result = 0;
        //小顶堆
        priority_queue<int,vector<int>,greater<int> > heap;
        int temp1;
        for(int i = 0;i < n;i++)
        {
            cin >> temp1;
            heap.push(temp1);
        }
        while(heap.size() > 1){
            int a = heap.top();
            heap.pop();
            int b = heap.top();
            heap.pop();
            int temp2 = a + b;
            result_.push_back(temp2);
            heap.push(temp2);
        }
        for(int i = 0;i < result_.size();i++)
        {
            result += result_[i];
        }
        cout << result << endl;
    }
    return 0;
}

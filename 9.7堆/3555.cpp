#include<iostream>
#include<algorithm>
using namespace std;
const int maxn = 100010;
int heap[maxn],n;
void down_adjust(int low,int high)
{
    int i = low,j = i * 2;
    while(j <= high)
    {
        if(j + 1 <= high && heap[j + 1] > heap[j])
        {
            j = j + 1;
        }
        if(heap[j] > heap[i])
        {
            swap(heap[j],heap[i]);
            i = j;
            j = i * 2;
        }
        else
        {
            break;
        }
    }
}
void create_heap()
{
    for(int i = n / 2;i >= 1;i--)
    {
        down_adjust(i,n);
    }
}
void up_adjust(int low,int high)
{
    int i = high,j = i / 2;
    while(j >= low)
    {
        if(heap[j] < heap[i])
        {
            swap(heap[j],heap[i]);
            i = j;
            j = i / 2;
        }
        else
        {
            break;
        }
    }
}
void insert_(int x)
{
    heap[++n] = x;
    up_adjust(1,n);
}
void delete_top()
{
    heap[1] = heap[n--];
    down_adjust(1,n);
}
int main()
{
    while(cin >> n)
    {
        int a[maxn],b[maxn];
        int temp;
        for(int i = 1;i <= n;i++)
        {
            cin >> temp;
            a[i] = temp;
        }
        for(int i = 1;i <= n;i++)
        {
            cin >> temp;
            b[i] = temp;
            heap[i] = a[1] + b[i];
        }
        create_heap();
        for(int i = 2;i <= n;i++)
        {
            for(int j = 1;j <= n;j++)
            {
                temp = a[i] + b[j];
                if(temp >= heap[1])
                    break;
                else
                {
                    delete_top();
                    insert_(temp);
                }
            }
        }
        int result[maxn];
        int len = n;
        for(int i = 1;i <= n;i++)
        {
            result[i] = heap[1];
            heap[1] = heap[len];
            len--;
            down_adjust(1,len);
        }
        for(int i = n;i >= 1;i--)
        {
            cout << result[i] << " ";
        }
        cout << endl;
    }
    return 0;
}

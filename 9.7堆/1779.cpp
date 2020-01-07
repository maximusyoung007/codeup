#include <iostream>
#include<algorithm>
using namespace std;
const int maxn = 100010;
int heap[maxn],n;
//向下调整
void down_adjust(int low, int high)
{
	int i = low, j = i * 2;
	while (j <= high)
	{
		if (j + 1 <= high && heap[j + 1] > heap[j])
		{
			j = j + 1;
		}
		if (heap[j] > heap[i])
		{
			swap(heap[j], heap[i]);
			i = j;
			j = i * 2;
		}
		else
		{
			break;
		}
	}
}
//创建堆
void create_heap()
{
	for (int i = n / 2; i >= 1; i--)
	{
		down_adjust(i, n);
	}
}
void heap_sort()
{
	create_heap();
	for (int i = n; i > 1; i--)
	{
		swap(heap[i], heap[1]);
		down_adjust(1, i - 1);
	}
}
int main()
{
	while (cin >> n)
	{
		int data;
		for (int i = 1; i <= n; i++)
		{
			cin >> data;
			heap[i] = data;
		}
		heap_sort();
		for (int i = 1; i <= n; i++)
		{
			cout << heap[i] << " ";
		}
		cout << endl;
	}
	return 0;
}

//https://blog.csdn.net/weirdo_coder/article/details/89167900
#include<iostream>
#include<queue>
#include<map>
#include<algorithm>
using namespace std;
struct node
{
	int a[3][3];
	int x0, y0;  //记录0的位置
	int step;	//记录步数
};
map <int, bool> M;  //用map实现映射
int my_hash(int t[3][3])   //映射/标志
{
	int p = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			p = p * 10 + t[i][j];
		}
	}
	return p;
}
bool next_sta(node &t, int n)  //交换
{
	int x = t.x0, y = t.y0;
	if (n == 0 && x > 0)  //上
	{
		swap(t.a[x][y], t.a[x - 1][y]);
		t.x0 = t.x0 - 1;
		return true;
	}
	if (n == 1 && x <2)  //下
	{
		swap(t.a[x][y], t.a[x + 1][y]);
		t.x0 = t.x0 + 1;
		return true;
	}
	if (n == 2 && y>0)  //左
	{
		swap(t.a[x][y], t.a[x][y-1]);
		t.y0 = t.y0 - 1;
		return true;
	}
	if (n == 3 && y<2)  //右
	{
		swap(t.a[x][y], t.a[x][y + 1]);
		t.y0 = t.y0 + 1;
		return true;
	}
	return false;

}
int main()
{
	node start, end;

	for (int i = 0; i < 3; i++) //输出初始状态
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> start.a[i][j];
			if (start.a[i][j] == 0)
			{
				start.x0 = i;
				start.y0 = j;
			}
		}
	}
	for (int i = 0; i < 3; i++)  //目标状态
	{
		for (int j = 0; j < 3; j++)
			cin >> end.a[i][j];
	}
	queue <node>Q;
	start.step =1, end.step = 0;
	Q.push(start);
	M[my_hash(start.a)] = 1;
	int flag = 0;
	while (!Q.empty())
	{
		node vn = Q.front();
		Q.pop();
		for (int i = 0; i < 4; i++)  //0，1，2，3分别代表上下左右
		{
			node temp = vn;
			if (next_sta(temp, i))   //判断该交换是否可行
			{
				if (M[my_hash(temp.a)] == 0)  //该状态未出现过
				{
					M[my_hash(temp.a)] = 1;
					temp.step++;
					if (my_hash(temp.a) == my_hash(end.a))  //与最终结点的值相同
					{
						end.step = temp.step;
						flag = 1;
						break;
					}
					Q.push(temp);
				}
			}
		}
		if (flag)break;
	}
	cout << end.step << endl;
	return 0;
}

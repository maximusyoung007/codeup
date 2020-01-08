#include<cstdio>
#include<queue>
#include<cstring>
#include<algorithm>
using namespace std;

int N;
char str[101];
struct Node
{
	int father, left, right, num;
	char ch, code[101];
	//结构体优先队列。对每个字符的权值排序
	//先出权值比较小的，如果权值相等，出字符较小的
	friend bool operator<(Node a, Node b)
	{
		if (a.father>b.father)
			return true;
		if (a.father == b.father&&a.ch>b.ch)
			return true;
		return false;
	}
} tree[200];
bool cmp(Node a, Node b)
{
	return a.num<b.num;
}
void dfs(int t, int i)
{//t表示huffman树的节点个数
	if (t<N)//说明t编号的节点就是叶子节点
	{
		str[i] = '\0';//str[q]='\0'，表示字符的结尾，便于后面的strcpy（）函数
		strcpy(tree[t].code, str);
		return;
	}
	else
	{
		//递归访问左孩子
		str[i] = '0';
		i++;
		dfs(tree[t].left, i);
		i--;

		//递归访问右孩子
		str[i] = '1';
		i++;
		dfs(tree[t].right, i);
		i--;

	}
}
int main()
{
	priority_queue<Node>Q;
	int n;
	while (~scanf("%d", &n))
	{
		if (n == 0)
			continue;
		memset(str, 0, sizeof(str));
		memset(tree, 0, sizeof(tree));
		for (int i = 0; i<n; i++)
		{
			getchar();
			Node node;
			scanf("%c %d", &node.ch, &node.father);
			node.num = i;//叶子节点的编号
			Q.push(node);
		}
		N = n;
		int t = 0;
		//创建huffman树
		//利用优先队列 每次选择权值最小的两个，然后将其结果在加入优先队列
		// 将权值最小的两个  ，添加到树中
		while (Q.size()>1)
		{
			Node node1, node2, node3;
			node1 = Q.top();
			Q.pop();
			node2 = Q.top();
			Q.pop();
			node3.father = node1.father + node2.father;
			node3.ch = node1.ch;
			node3.left = node1.num;
			node3.right = node2.num;
			node3.num = n++;
			tree[t++] = node1;
			tree[t++] = node2;
			Q.push(node3);
		}
		tree[t++] = Q.top();//优先队列里面剩下一个元素，它就是根节点，直接加到树中
		Q.pop();
		sort(tree, tree + t, cmp);//按照num序号排序,最后可以按编号输出，排除非叶子节点
		dfs(t - 1, 0);
		for (int i = 0; i<N; i++)
			printf("%c:%s\n", tree[i].ch, tree[i].code);
	}
}

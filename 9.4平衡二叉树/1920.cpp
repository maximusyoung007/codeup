#include<iostream>
#include<vector>
#include<algorithm>
#include<string.h>
using namespace std;
vector<int> preV, midV, preV2,midV2;//分别用来存放前序，中序，后序遍历的结果
struct node {
	int data;
	node* lchild;
	node* rchild;
};
node* root;
//新建节点
node* newNode(int v)
{
	node* Node = new node;
	Node->data = v;
	Node->lchild = Node->rchild = NULL;
	return Node;
}
//插入节点
void insert(node* &root, int x)
{
	if (root == NULL) {
		root = newNode(x);
		return;
	}
	if (x == root->data)
		return;
	else if (x < root->data) {
		insert(root->lchild, x);
	}
	else if (x > root->data) {
		insert(root->rchild, x);
	}
}
//构造二叉查找树
node* create(int data[], int n)
{
	node* root = NULL;
	for (int i = 0; i < n; i++) {
		insert(root, data[i]);
	}
	return root;
}
//前序遍历
void preOrder(node* root)
{
	if (root == NULL) {
		return;
	}
	preV.push_back(root->data);
	preOrder(root->lchild);
	preOrder(root->rchild);
}
//中序遍历
void midOrder(node* root)
{
	if (root == NULL)
		return;
	midOrder(root->lchild);
	midV.push_back(root->data);
	midOrder(root->rchild);
}


int main()
{
	int n;
	char str[110] = { '0' }, str2[110] = { '0' };
	int data[110];
	while (cin >> n) 
	{
		preV2.clear();
		midV2.clear();
		if (n == 0)break;
		cin >> str;
		int len = strlen(str);
		for (int i = 0; i < len; i++) 
		{
			data[i] = str[i] - '0';
		}
		node* root = create(data, len);
		preOrder(root);
		midOrder(root);
		//用于存储最开始的前序和中序遍历结果
		preV2 = preV;
		midV2 = midV;
		while (n--) 
		{
			preV.clear();
			midV.clear();
			cin >> str2;
			int data2[110];
			for (int i = 0; i < len; i++) 
			{
				data2[i] = str2[i] - '0';
			}
			node* root2 = create(data2, len);
			preOrder(root2);
			midOrder(root2);
			if (preV == preV2 && midV == midV2) 
			{
				cout << "YES" << endl;
			}
			else
			{
				cout << "NO" << endl;
			}
			//下一轮最外层循环要用preV和midV,要先清空
			preV.clear();
			midV.clear();
		}
	}
	return 0;
}

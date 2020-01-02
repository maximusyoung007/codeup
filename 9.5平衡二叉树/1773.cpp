#include<iostream>
#include<algorithm>
using namespace std;
struct node {
	int data;
	int height;
	node* lchild;
	node* rchild;
};
node* root;
//新建节点
node* newNode(int v)
{
	node* Node = new node;
	Node->data = v;
	Node->height = 1;
	Node->lchild = Node->rchild = NULL;
	return Node;
}
int get_height(node* root)
{
	if (root == NULL)
	{
		return 0;
	}
	return root->height;
}
//更新节点高度
void update_height(node* root)
{
	root->height = max(get_height(root->lchild), get_height(root->rchild)) + 1;
}
//计算平衡因子
int get_balance_factor(node* root)
{
	return get_height(root->lchild) - get_height(root->rchild);
}
//右旋
void r(node* &root)
{
	node* temp = root->lchild;
	root->lchild = temp->rchild;
	temp->rchild = root;
	update_height(root);
	update_height(temp);
	root = temp;
}
//左旋
void l(node* &root)
{
	node* temp = root->rchild;
	root->rchild = temp->lchild;
	temp->lchild = root;
	update_height(root);
	update_height(temp);
	root = temp;
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
		update_height(root);
		if (get_balance_factor(root) == 2)
		{
			//LL型，右旋
			if (get_balance_factor(root->lchild) == 1)
			{
				r(root);
			}
			//LR型，先左旋后右旋
			else if (get_balance_factor(root->lchild) == -1)
			{
				l(root->lchild);
				r(root);
			}
		}
	}
	else if (x > root->data) {
		insert(root->rchild, x);
		update_height(root);
		if (get_balance_factor(root) == -2)
		{
			//RR型，左旋
			if (get_balance_factor(root->rchild) == -1)
			{
				l(root);
			}
			//RL型，先右旋后左旋
			else if (get_balance_factor(root->rchild) == 1)
			{
				r(root->rchild);
				l(root);
			}
		}
	}
}
//寻找节点
void search(node* root, int x)
{
	if (root == NULL)
	{
		cout << 0 << " ";
		return;
	}
	if (x == root->data)
	{
		cout << 1 << " ";
	}
	else if (x < root->data)
	{
		search(root->lchild, x);
	}
	else if (x > root->data)
	{
		search(root->rchild, x);
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
int main()
{
	int n, k;
	while (cin >> n >> k)
	{
		int data[510];
		for (int i = 0; i < n; i++) {
			cin >> data[i];
		}
		root = create(data, n);
		for (int i = 0; i < k; i++)
		{
			int temp;
			cin >> temp;
			search(root, temp);
		}
		cout << endl;
	}
	return 0;
}

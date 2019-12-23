#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> preV, midV, afterV;//分别用来存放前序，中序，后序遍历的结果
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
	Node -> data = v;
	Node -> lchild = Node -> rchild = NULL;
	return Node;
}
//插入节点
void insert(node* &root, int x)
{
	if (root == NULL) {
		root = newNode(x);
		return;
	}
	if (x == root -> data)
		return;
	else if (x < root -> data) {
		insert(root -> lchild, x);
	}
	else if (x > root -> data) {
		insert(root -> rchild, x);
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
	preV.push_back(root -> data);
	preOrder(root -> lchild);
	preOrder(root -> rchild);
}
//中序遍历
void midOrder(node* root)
{
	if (root == NULL)
		return;
	midOrder(root -> lchild);
	midV.push_back(root -> data);
	midOrder(root -> rchild);
}
//后序遍历
void afterOrder(node* root)
{
	if (root == NULL)
		return;
	afterOrder(root -> lchild);
	afterOrder(root -> rchild);
	afterV.push_back(root -> data);
}
int main()
{
	int n;
	int data[110];
	while (cin >> n) {
		for (int i = 0; i < n; i++) {
			cin >> data[i];
		}
		root = create(data, n);
		preOrder(root);
		midOrder(root);
		afterOrder(root);
		//去除vector 中的重复元素
		//unique()函数将重复的元素放到vector的尾部
		//然后返回指向第一个重复元素的迭代器 再用erase函数擦除从这个元素到最后元素的所有的元素
		preV.erase(unique(preV.begin(), preV.end()), preV.end());
		midV.erase(unique(midV.begin(), midV.end()), midV.end());
		afterV.erase(unique(afterV.begin(), afterV.end()), afterV.end());
		for (vector<int>::iterator it = preV.begin(); it != preV.end(); it++) {
			cout << *it << " ";
		}
		cout << endl;
		for (vector<int>::iterator it = midV.begin(); it != midV.end(); it++) {
			cout << *it << " ";
		}
		cout << endl;
		for (vector<int>::iterator it = afterV.begin(); it != afterV.end(); it++) {
			cout << *it << " ";
		}
		cout << endl;
		preV.clear();
		midV.clear();
		afterV.clear();
	}
	return 0;
}

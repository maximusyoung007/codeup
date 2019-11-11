#include<iostream>
#include<cstdio>
#include<stdlib.h>
using namespace std;
struct node{
    int data;
    node* lchild;
    node* rchild;
};

char c[110];
int i;
node* root = new node;

node* create()
{
    node* root = new node;
    if(c[i++] == '#')
        root = NULL;
    else{
        root -> data = c[i - 1];
        root -> lchild = create();
        root -> rchild = create();
    }
    return root;
}
void inOrder(node* root)
{
    if(root == NULL){
        return;
    }
    inOrder(root -> lchild);
    printf("%c ",root -> data);
    inOrder(root -> rchild);
}
int main()
{
    while(scanf("%s",c) != EOF){
        i = 0;
        root = create();
        inOrder(root);
        cout << endl;
    }
    return 0;
}

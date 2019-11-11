#include<iostream>
#include<cstdio>
#include<queue>
#include<string.h>
using namespace std;
const int maxn = 50;
struct node{
    int data;
    node* lchild;
    node* rchild;
};
char pre[maxn],in[maxn],post[maxn];

node* create(int preL,int preR,int inL,int inR)
{
    if(preL > preR){
        return NULL;
    }

    node* root = new node;
    root -> data = pre[preL];
    int k;
    for(k = inL;k <= inR;k++){
        if(in[k] == pre[preL]){
            break;
        }
    }
    int numLeft = k - inL;

    root -> lchild = create(preL + 1,preL + numLeft,inL,k - 1);
    root -> rchild = create(preL + numLeft + 1,preR,k + 1,inR);

    return root;
}

void postOrder(node* root)
{
    if(root == NULL)
        return;
    postOrder(root->lchild);
    postOrder(root->rchild);
    printf("%c",root->data);
}
int main()
{
    while(scanf("%s",pre) != EOF){
        scanf("%s",in);
        int len1 = strlen(pre);
        int len2 = strlen(in);
        //cout << len1 << "--------" << len2 << endl;
        node* root = create(0,len1 - 1,0,len2 - 1);
        postOrder(root);
        printf("\n");
    }
    return 0;
}

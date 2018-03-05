#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
typedef int ElemType,Status;
typedef struct LNode{
    ElemType data;
    struct LNode *next;
}LNode,*LinkList;
void show(LinkList &L)
{
    LinkList p = L->next;
    while(p){
        printf("%d ",p->data);
        p = p->next;
    }
}
int main()
{
    int x,m;
    LinkList L = (LinkList)malloc(sizeof(LNode));
    LinkList pre,p,s;
    L->next = NULL;
    s = L;
    cin>>x>>m;
    while(m--){
        p = (LinkList)malloc(sizeof(LNode));
        scanf("%d",&(p->data));
        p->next = s->next;
        s->next = p;
        s = p;
    }
    pre = L;
    p = pre->next;
    while(p && p->data < x){
        pre = p;
        p = p->next;
    }
    if(p->data == x){
        printf("%d\n",x);
        int temp = p->data;
        p->data = p->next->data;
        p->next->data = temp;
    }
    else{
        printf("no\n");
        s =(LinkList)malloc(sizeof(LNode));
        s->data = x;
        s->next = pre->next;
        pre->next = s;
    }
    show(L);
    return 0;
}

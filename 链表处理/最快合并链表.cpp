#include<stdio.h>
#include<stdlib.h>
using namespace std;
typedef int ElemType,Status;
typedef struct LNode{
    ElemType data;
    struct LNode* next;
}LNode,*LinkList;
void show(LinkList &L)
{
    LinkList p = L->next;
    while(p != L){
        printf("%d",p->data);
        p = p->next;
    }
}
int main()
{
    int m,n;
    LinkList L1 = (LinkList)malloc(sizeof(LNode));
    LinkList L2 = (LinkList)malloc(sizeof(LNode));
    L1->next = L1;
    L2->next = L2;
    LinkList p,s,t;
    s = L1;
    t = L2;
    scanf("%d",&m);
    while(m--)
    {
        LinkList p = (LinkList)malloc(sizeof(LNode));
        scanf("%d",&(p->data));
        p->next = s->next;
        s->next = p;
        s = p;
    }
    scanf("%d",&n);
    while(n--)
    {
        LinkList p = (LinkList)malloc(sizeof(LNode));
        scanf("%d",&(p->data));
        p->next = t->next;
        t->next = p;
        t = p;
    }
    /*l1's head is still here,l2's head has gone*/
    s->next = L2->next;
    t->next = L1;
    free(L2);
    show(L1);
    return 0;
}

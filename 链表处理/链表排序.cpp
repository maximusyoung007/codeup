#include<cstdio>
#include<stdlib.h>
#include<iostream>
#include<string>
#define ERROR -1
#define OK 1
using namespace std;
typedef int ElemType,Status;
typedef struct LNode{
    ElemType num;
    ElemType score;
    struct LNode *next;
}LNode,*LinkList;
Status ListInsert_L(LinkList &L,ElemType num,ElemType score)
{
    LinkList p,s;
    p = L;
    int j = 0;
    while(p->next != NULL && p->next->num < num){//from small to large
        p = p->next;
        j++;
    }
    s = (LinkList)malloc(sizeof(LNode));
    s->num = num;
    s->score = score;
    s->next = p->next;
    p->next = s;
    return OK;
}
void show(LinkList &L)
{
    LinkList p = L->next;
    while(p){
        printf("%d%d\n",p->num,p->score);
        p = p->next;
    }
}
int main()
{
    int a,b;
    ElemType num,score;
    LinkList L = (LinkList)malloc(sizeof(LNode));
    L->next = NULL;
    cin>>a>>b;
    int sum = a + b;
    while(sum--){
        scanf("%d%d",&num,&score);
        ListInsert_L(L,num,score);
    }
    show(L);
    return 0;
}

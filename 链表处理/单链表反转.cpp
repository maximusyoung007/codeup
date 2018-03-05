#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
typedef struct LNode{
    int data;
    struct LNode *next;
}LNode,*LinkList;
void show(LinkList &L)
{
    LinkList p = L->next;
    while(p){
        printf("%d ",p->data);
        p = p->next;
    }
    printf("\n");
}
int main()
{
        int n;
        while(cin>>n){
            LinkList L = (LinkList)malloc(sizeof(LNode));
            LinkList p,s;
            L->next = NULL;
            s = L;
        while(n--){
            p = (LinkList)malloc(sizeof(LNode));
            scanf("%d",&(p->data));
            p->next = s->next;
            s->next = p;
            s = p;
        }
        if(L->next == NULL){
            printf("list is empty!");
            continue;
        }
        show(L);
        s = L->next;
        L->next = NULL;//another linked list
        /*insert every nodes in l1 into l2,and puts it after l2's head one by one*/
        while(p != NULL){
            p = s->next;
            s->next = L->next;
            L->next = s;
            s = p;
        }
        show(L);
        }
        return 0;
}


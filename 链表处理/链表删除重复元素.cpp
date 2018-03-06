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
        LinkList p,s,q;
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
            printf("list is empty\n");
            continue;
        }
        show(L);
        s = L->next;
        p = s->next;
        //p is q's next node
        while(p){
            if(s->data == p->data){
                s->next = p->next;
                q = p;
                free(q);//if s=p,delete p;
            }
            else{
                s = p;
            }
            p = s->next;
        }
        show(L);
    }
    return 0;
}

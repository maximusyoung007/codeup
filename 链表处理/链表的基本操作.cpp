#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#define ERROR -1
#define OK 1
using namespace std;
typedef int ElemType, Status;

typedef struct LNode{
    ElemType data;
    struct LNode *next;
}Lnode,*LinkList;

Status GetElem_L(LinkList &L,int i,ElemType &e){
    LinkList p;
    p = L->next;
    int j = 1;
    while(p && j < i){
        p = p->next;
        ++j;
    }
    if(!p || j > i){
        return ERROR;
    }
    e = p->data;
    return OK;
}

Status ListInsert_L(LinkList &L,int i,ElemType e){
    LinkList p,s;
    p = L;
    int j = 0;
    while(p && j < i - 1){
        p = p->next;
        j ++;
    }
    if(!p || j > i - 1){
        return ERROR;
    }
    s = (LinkList)malloc(sizeof(LNode));
    s->data = e;
    s->next = p->next;
    p->next = s;
    return OK;
}

Status ListDelete_L(LinkList &L, int  i,ElemType &e){
    LinkList p,q;
    p = L;
    int j = 0;
    while(p->next && j < i - 1){
        p = p->next;
        j++;
    }
    if(!(p->next) || j > i - 1){
        return ERROR;
    }
    q = p->next;
    p->next = q->next;
    free(q);
    return OK;
}

void CreatList_L(LinkList &L,int n){
    LinkList p;
    L = (LinkList)malloc(sizeof(Lnode));
    L->next = NULL;
    while(n--){
        p = (LinkList)malloc(sizeof(Lnode));
        scanf("%d",&(p->data));
        p->next = L->next;
        L->next = p;
    }
}

void show(LinkList &L){
    LinkList p = L->next;
    printf("%d",p->data);
    p = p->next;
    while(p){
        printf(" %d",p->data);
        p = p->next;
    }
    printf("\n");
}

int main(){
    LinkList L;
    string str;
    int n,m;
    ElemType e;
    cin >> n;
    CreatList_L(L,n);
    cin >> m;
    while(m--){
        cin >> str;
        if(str == "show"){
            if(L->next != NULL)
                show(L);
            else
                printf("Link list is empty\n");
        }else if(str == "delete"){
            cin >> n;
            if(ListDelete_L(L,n,e) == ERROR)
                printf("delete fail\n");
            else
                printf("delete OK\n");
        }else if(str == "insert"){
            cin >> n >> e;
            if(ListInsert_L(L,n,e) == ERROR)
                printf("insert fail\n");
            else
                printf("insert OK\n");
        }else if(str == "get"){
            cin >> n;
            if(GetElem_L(L,n,e) == ERROR)
                printf("get fail\n");
            else
                printf("%d\n",e);
        }
    }
    return 0;
}

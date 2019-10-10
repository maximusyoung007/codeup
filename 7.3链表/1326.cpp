#include<iostream>
#include<cstdio>
#include<string.h>
#include<algorithm>
#include <stdlib.h>
using namespace std;
struct node{
    int data;
    node* next;
};
//创建一个链表
node* create(int n)
{
    node *p,*head;
    head = new node;
    head -> next = NULL;
    for(int i = 0;i < n;i++){
        p = new node;
        scanf("%d",&(p -> data));
        p -> next = head -> next;
        head -> next = p;
    }
    return head;
}

//获取链表的某个节点
void get(node* head,int pos)
{
    node* p = head;
    node* q = head;
    int sum = 1;
    while(q -> next != NULL){
        sum++;
        q = q -> next;
    }
    sum = sum - 1;
    if(pos <= sum && pos >= 1){
        for(int i = 0;i < pos;i++){
            p = p -> next;
        }
        printf("%d\n",p -> data);
    }
    else{
        printf("get fail\n");
    }
}

//删除链表
void delete_(node* head,int pos)
{
    node* p = head -> next;
    node* pre = head;
    if(p != NULL){
        for(int i = 1;i < pos;i++){
            pre = p;
            p = p -> next;
        }
        pre -> next = p -> next;
        delete(p);
        printf("delete OK\n");
    }
    else if(p == NULL){
        printf("delete fail\n");
    }
}

//插入
void insert(node* head,int pos,int e)
{
    node* p = head;
    node* q = head;
    int sum = 1;
    while(q -> next != NULL){
        sum++;
        q = q -> next;
    }
    sum = sum - 1;
    if((sum > 0 && pos >= 1 && pos <= sum)){
        for(int i = 1;i < pos;i++){
            p = p -> next;
        }
        node* s = new node;
        s -> data = e;
        s -> next = p -> next;
        p -> next = s;
        printf("insert OK\n");
    }
    else if(sum == 0 && pos == 1){
        for(int i = 1;i < pos;i++){
            p = p -> next;
        }
        node* s = new node;
        s -> data = e;
        s -> next = p -> next;
        p -> next = s;
        printf("insert OK\n");
    }
    else{
        printf("insert fail\n");
    }
}

//获取整个链表
void show(node* head)
{
    node* p = head;
    if(p -> next != NULL){
        p = p -> next;
        while(p != NULL){
            printf("%d ",p -> data);
            p = p -> next;
        }
        printf("\n");
    }
    else if(p -> next == NULL){
        printf("Link list is empty\n");
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    node* L = create(n);
    int m;
    scanf("%d",&m);
    string s;
    for(int i = 0;i < m;i++){
        cin >> s;
        if(s == "show"){
            show(L);
        }
        else if(s == "delete"){
            int pos;
            scanf("%d",&pos);
            delete_(L,pos);
        }
        else if(s == "get"){
            int pos;
            scanf("%d",&pos);
            get(L,pos);
        }
        else if(s == "insert"){
            int pos,e;
            scanf("%d %d",&pos,&e);
            insert(L,pos,e);
        }
    }
    return 0;
}

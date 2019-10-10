#include<cstdio>
#include<iostream>
using namespace std;
struct node{
    int data;
    node* next;
};
node* create(int n)
{
    node *head,*p,*end;
    head = new node;
    end = new node;
    head -> next = NULL;
    end = head;
    for(int i = 0;i < n;i++){
        p = new node;
        scanf("%d",&(p -> data));
        end -> next = p;
        end = p;
    }
    end -> next = NULL;
    return head;
}
void delete_(node* head)
{
    node *p,*q;
    p = head;
    q = head;
    p = p -> next;
    while(p != NULL){
        if(p -> data == q -> data){
            q -> next = p -> next;
            delete(p);
            p = q -> next;//删除重复节点并将p指向下一位
        }
        else{
            p = p -> next;
            q = q -> next;
        }
    }
}
void show(node* head)
{
    node* p = head;
    p = p -> next;
    while(p != NULL){
        printf("%d ",p -> data);
        p = p -> next;
    }
    cout << endl;
}
int main()
{
    int n;
    while(scanf("%d",&n) != EOF){
        if(n == 0){
            printf("list is empty\n");
        }
        else{
            node* L = create(n);
            show(L);
            delete_(L);
            show(L);
        }
    }
    return 0;
}

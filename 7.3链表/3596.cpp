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
//将链表的节点取下来，依次用头插法插到另一个表头上
node* reverse(node* head)
{
    node* newHead = new node;
    newHead -> next = NULL;
    node* p = head;
    p = p -> next;
    while(p != NULL){
        node* temp = p -> next;
        p -> next = newHead -> next;
        newHead -> next = p;
        p = temp;
    }
    return newHead;
}
int main()
{
    int n;
    while(scanf("%d",&n) != EOF){
        if(n != 0){
            node* L = create(n);
            show(L);
            node* L2 = reverse(L);
            show(L2);
        }
        else{
            printf("list is empty\n");
        }
    }
    return 0;
}

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
void insert(node* head,int num)
{
    node* p = head;
    node* q = p -> next;
    while(q != NULL){
        //如果num小于某个节点，就插到这个节点前面
        if(num < q -> data){
            node* n = new node;
            n -> data = num;
            n -> next = p -> next;
            p -> next = n;
            break;
        }
        //num大于最后一位,就插到最后一位的后面
        else if(q -> next == NULL && q -> data <= num){
            node* n = new node;
            n -> data = num;
            q -> next = n;
            n -> next = NULL;
            break;
        }
        p = p -> next;
        q = q -> next;
    }
}
void find(node* head,int num)
{
    node* p = head;
    node* p2 = head;
    p = p -> next;
    p2 = p2 -> next;
    while(p != NULL){
        if(p -> data == num){
            if(p -> next != NULL){
                node* q = p -> next;
                int temp = q -> data;
                q -> data = p -> data;
                p -> data = temp;
                break;
            }
        }
        p = p -> next;
    }
    if(p == NULL){
        printf("no\n");
        insert(head,num);
    }
}
int main()
{
    int num;
    int m;
    scanf("%d %d",&num,&m);
    node* L = create(m);
    find(L,num);
    show(L);
    return 0;
}

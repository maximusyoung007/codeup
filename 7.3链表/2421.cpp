#include<cstdio>
struct node{
    int data;
    node* next;
};
//尾插法
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
    //最后一位要指向空
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
}
void merge(node* head1,node* head2)
{
    node *p1,*p2;
    p1 = head1 -> next;
    p2 = head2 -> next;
    while(p1 -> next != NULL){
        p1 = p1 -> next;
    }
    p1 -> next = head2 -> next;

}
int main()
{
    int m,n;
    scanf("%d",&m);
    node* L1 = create(m);
    scanf("%d",&n);
    node* L2 = create(n);
    merge(L1,L2);
    show(L1);
    return 0;
}

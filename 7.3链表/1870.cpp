#include<cstdio>
#include<iostream>
struct node{
    int id;
    int grade;
    node* next;
};
node* create(int n)
{
    node *p,*head;
    head = new node;
    head -> next = NULL;
    for(int i = 0;i < n;i++){
        p = new node;
        scanf("%d %d",&(p -> id),&(p -> grade));
        p -> next = head -> next;
        head -> next = p;
    }
    return head;
}
void merge(node* head)
{
    node *p,*q;
    for(p = head -> next;p -> next != NULL;p = p -> next){
        for(q = p -> next;q != NULL;q = q -> next){
            if(q -> id < p -> id){
                int temp1 = q -> id;
                q -> id = p -> id;
                p -> id = temp1;
                int temp2 = q -> grade;
                q -> grade = p -> grade;
                p -> grade = temp2;
            }
        }
    }
}
void show(node* head)
{
    node*p = head;
    p = p -> next;
    while(p != NULL){
        printf("%d %d\n",p -> id,p -> grade);
        p = p -> next;
    }
}
int main()
{
    int n,m;
    while(scanf("%d %d",&n,&m) != EOF){
        node* L = create(n+m);
        merge(L);
        show(L);
    }
    return 0;
}

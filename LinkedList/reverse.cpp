#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *next;
};
struct node* head=NULL;
//insert
void insert(int n){
    struct node* newnode = (struct node*) malloc(sizeof(struct node));
    newnode->data=n;
    newnode->next=head;
    head=newnode;
}

node* reverse(struct node* head){
    node *temp=NULL;

    while(head!=NULL){
        node *next=head->next;
        head->next=temp;
        temp=head;
        head=next;
    }
    return temp;
}
void display(struct node* head){
    while(head != NULL) {
        cout<<head->data<<" ";
        head = head->next;
    }
}

int main(){

    insert(1);
    insert(2);
    insert(3);
    insert(5);
    display(head);
    cout<<" ";

    head=reverse(head);
    if()
    display(head);

    return 0;

}

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

//insert at end
void insertAtEnd(int n){
    struct node* newnode = (struct node*) malloc(sizeof(struct node));
    newnode->data=n;
    newnode->next=NULL;

    struct node* temp=head;
    while(temp->next!=NULL)
        temp=temp->next;

    temp->next=newnode;
}

//insert at position
void insertAtPosition(int n,int pos){
    struct node* newnode = (struct node*) malloc(sizeof(struct node));
    newnode->data=n;

    struct node* temp=head;
    for(int i=2;i<pos;i++){
        if(temp->next!=NULL)
        temp=temp->next;
    }
    newnode->next=temp->next ;
    temp->next=newnode;

}

//delete from begining
void deleteFromBegin(){
    head=head->next;
}

//delete from end
void deleteFromEnd(){
    struct node *temp=head;
    while(temp->next->next!=NULL)
        temp=temp->next;
    temp->next=NULL;
}
//delete at position
void deleteFromPosition(int pos){
    struct node *temp=head;
    for(int i=2;i<pos;i++){
        if(temp->next!=NULL) temp=temp->next;
    }
    temp->next=temp->next->next;
}
int search(int n){
    struct node *temp=head;
    while(temp!=NULL){
        if(temp->data==n) return true;
        temp=temp->next;
    }
    return false;
}
void display(){
    struct node *temp;
    temp=head;
    while(temp!=NULL){
        cout<<temp->data;
        temp=temp->next;
    }

}


int main(){
    insert(1);
    insert(2);
    insert(3);
    insert(5);
    insertAtEnd(0);
    display();
    cout<<" ";

    deleteFromBegin();
    display();
    cout<<" ";

    deleteFromEnd();
    display();
    cout<<" ";

    deleteFromPosition(2);
    display();
    cout<<" ";
    search(3) ? cout<<"yes":cout<<"no";

    return 0;

}

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
int length(struct node* head){
    int c=0;
    while(head != NULL) {
        head = head->next;
        c+=1;
    }
    return c;
}
void solve(int n,int len){
    n=len-n;
    if (n==0){
        head=head->next;
    }
    else{
        node *temp=head;
        int c=0;

        for(int i=0;i<n-1;i++){
            if(temp->next!=NULL) temp=temp->next;
        }
        temp->next=temp->next->next;
    }
}
node *solve2(struct node* head,int n){
    // node *temp=head;
    node *fast=head,*slow=head;
    for(int i=0;i<n;i++)
        fast=fast->next;

    if(fast==NULL) {
        head=head->next;
    }
    else{
        while(fast->next !=NULL){
            fast=fast->next;
            slow=slow->next;
        }
        slow->next=slow->next->next;
       
    }
    return head;    
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

    int len=length(head);
    cout<<"length:"<<len<<endl;
    // solve(4,4);
    // display(head);

    head=solve2(head,4);
    display(head);
    return 0;

}

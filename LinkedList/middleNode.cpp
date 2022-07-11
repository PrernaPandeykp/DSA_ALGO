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
node* solve(struct node* head){
    
    node *fast=head,*slow=head;
    
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}
void display(struct node* head){
    while(head != NULL) {
        cout<<head->data<<" ";
        head = head->next;
    }
}

int main(){
    int n,ele;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>ele;
        insert(ele);
    }
    display(head);
    cout<<" ";

    node *midhead=solve(head);

    display(midhead);

    return 0;

}

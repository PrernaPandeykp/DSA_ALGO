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
node* solve(struct node* head,int val){
    
    while(head!=NULL){
        if(head->data==val){
            head->data=head->next->data;
            head->next=head->next->next;
        }
        else
        head=head->next;
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
    int n,ele;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>ele;
        insert(ele);
    }
    display(head);
    cout<<" ";

    solve(head,4);

    display(head);

    return 0;

}

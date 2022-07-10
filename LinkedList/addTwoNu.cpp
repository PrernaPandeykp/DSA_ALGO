#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *next;
};

//insert
void insert(node** head, int new_data) 
{ 

    node* new_node = new node();
    new_node->data = new_data; 
    new_node->next = (*head); 
  
    *head = new_node; 
} 
node* solve(node* l1,node* l2){
    node* dummy = new node();
    node* temp=dummy;
    int carry=0;

    while(l1 || l2 || carry){
        int s=0;
        if(l1!=NULL){
            s+=l1->data;
            l1=l1->next;
        } 
        if(l2!=NULL){
            s+=l2->data;
            l2=l2->next;
        } 
        s+=carry;
        carry=s/10;

        node *newnode=new node();
        temp->next=newnode;
        temp=temp->next;
    }
    return dummy->next;
}
int length(node* head){
    int c=0;
    while(head != NULL) {
        head = head->next;
        c+=1;
    }
    return c;
}

void display(struct node* head){
    while(head != NULL) {
        cout<<head->data<<" ";
        head = head->next;
    }
}

int main(){
    int m,n,ele;
    cin>>m;
    node* head1=NULL;
    node* head2=NULL;

    for(int i=0;i<m;i++){
        cin>>ele;
        insert(&head1,ele);
    }

    cin>>n;
    for(int i=0;i<n;i++){
        cin>>ele;
        insert(&head2,ele);
    }
    cout<<"list 1:";
    display(head1);
    cout<<" ";
    cout<<"list 2:";
    display(head2);
    solve(head1,head2);
    display(head);
    
    return 0;

}

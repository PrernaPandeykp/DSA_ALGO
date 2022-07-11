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
node* merge(node* l1,node* l2){
    node *head=new node(); 
    node*p=head; 
    while(l1 && l2){
        if(l1->data<=l2->data){
            p->next=l1;
            p=l1;
            l1=l1->next;
        }
        else{
            p->next=l2;
            p=l2;
            l2=l2->next;
        }
    }
    if(l1) p->next=l1;
    if(l2) p->next=l2;
    return head->next; 
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
    // node *head=merge(head1,head2);
    display(merge(head1,head2));
    
    return 0;

}

#include<iostream>
#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val){
        data =val;
        left=right=NULL;
    }
    
};

int count(Node *root,int &c){
    if(root==NULL) return ;
    
    c++;
    preOrder(root->left);
    preOrder(root->right);
}
void preOrder(Node *root){
    if(root==NULL) return ;
    
    cout<<root->data;
    preOrder(root->left);
    preOrder(root->right);
}
void inOrder(Node *root){
    if(root==NULL) return ;
    
    inOrder(root->left);
    cout<<root->data;
    inOrder(root->right);
}
void postOrder(Node *root){
    if(root==NULL) return ;
    
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data;

}


int main(){
    struct Node *root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);

    preOrder(root);
    cout<<endl;
    inOrder(root);
    cout<<endl;
    postOrder(root);

    int c=0;
    count(root,c);
    cout<<c;



}
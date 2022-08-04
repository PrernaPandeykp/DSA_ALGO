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

void inOrder(Node *root){
    if(root==NULL) return ;
    
    inOrder(root->left);
    cout<<root->data;
    inOrder(root->right);
}
struct Node* solve(Node *root){
    if(!root) return NULL;
    if((!root->left) && (!root->right)) {
        free(root);
        return NULL;

    }
    root->left =solve(root->left);
    root->right =solve(root->right);

    return root;
}
int main(){
    struct Node *root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left= new Node(4);

    
    inOrder(root);
    cout<<endl;
    inOrder(solve(root));
    
    




}
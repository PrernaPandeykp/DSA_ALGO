#include<iostream>
#include <bits/stdc++.h>
using namespace std;


class node
{
    public:
    int data;
    node* left;
    node* right;
};

node* newNode(int data)
{
    node* Node = new node();
    Node->data = data;
    Node->left = NULL;
    Node->right = NULL;
     
    return(Node);
}

node * findRight(node *root){
    if(root->right ==NULL) return root;

    return findRight(root->right);
}
node* newTree(node* root){
    if(root->left ==NULL) return root->right;
    if(root->right ==NULL) return root->left;

    node * rightChild =root->right;
    node *lastRight =findRight(root->left);
    lastRight->right =rightChild;
    
    return root->left;
}

node* solve(node* root , int key){
    if(root==NULL) 
    return NULL;

    if (root->data ==key) return newTree(root);
    node *curr= root;
    while(root!=NULL){
        if(root->data >key){
            if(root->left!=NULL && root->left->data ==key) root->left=newTree(root->left);
            else root=root->left;
        }
        else{
            if(root->right!=NULL && root->right->data ==key) root->right =newTree(root->right);
            else root=root->right;
        }

    }
    return curr;

}

void inOrder(node *root){
    if(root==NULL) return ;
    
    inOrder(root->left);
    cout<<root->data;
    inOrder(root->right);
}
// Driver code   
int main()
{
    node *root = newNode(5);
 
    root->left = newNode(2);
    root->right = newNode(6);
    root->right->right = newNode(7);
    root->left->left = newNode(1);
    root->left->right = newNode(4);

     

    solve(root,2);
    inOrder(root);

    return 0;
}
 

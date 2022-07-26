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
int height(node* root){
    if(root==NULL)
    return 0;

    int lh=height(root->left);
    int rh=height(root->right);

    return 1+max(lh,rh);
}

node* newNode(int data)
{
    node* Node = new node();
    Node->data = data;
    Node->left = NULL;
    Node->right = NULL;
     
    return(Node);
}
     
node* solve(node* root , int val){
    while(root!=NULL && root->data!=val){
        root= val < root->data ? root->left :root->right;
    }
    return root; 
    
}
// Driver code   
int main()
{
    node *root = newNode(5);
 
    root->left = newNode(2);
    root->right = newNode(6);
    // root->left->left = newNode(4);
    // root->left->right = newNode(5);
     
    cout << "Height of tree is " << height(root)<<endl;

    cout<<solve(root,6);
    return 0;
}
 

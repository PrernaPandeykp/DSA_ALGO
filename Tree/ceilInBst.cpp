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
     
int solve(node* root , int key){
    int ceil=-1;
    while(root){
        if(key== root->data){
            ceil=root->data;
            return ceil;
        }
        else if (key > root->data){
            root=root->right;
        }
        else{
        ceil=root->data;
        root=root->left;
        }
    }
    return ceil;
    
}
// Driver code   
int main()
{
    node *root = newNode(5);
 
    root->left = newNode(2);
    root->right = newNode(6);
    root->left->left = newNode(1);
    root->left->right = newNode(4);
     

    cout<<solve(root,3);
    return 0;
}
 

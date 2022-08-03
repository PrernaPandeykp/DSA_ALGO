// Not Done

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


int c=0;
int inOrder(Node *root,int k){
    if(root==NULL) return 0;
    
    inOrder(root->left,k);
    c+=1;
    if(c==k);
    return root->data;

    inOrder(root->right,k);
}


int main(){
    struct Node *root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    int k;
    cin>>k;
    cout<<inOrder(root,k);
    
    



}
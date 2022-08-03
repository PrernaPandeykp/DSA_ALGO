
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


void inOrder(Node *root,vector<int> &v){
    if(root==NULL) return ;
    
    inOrder(root->left,v);
    v.push_back(root->data);
    inOrder(root->right,v);
}

int main(){
    Node *root = new Node(5);
 
    root->left = new Node(2);
    root->right = new Node(6);
    root->right->right = new Node(7);
    root->left->left = new Node(1);
    root->left->right = new Node(4);


    vector<int>v;
    inOrder(root,v);
    vector<int> v1(v);
    sort(v1.begin(),v1.end());
    if(v == v1) cout<<"true";
    else cout<<"false";

}
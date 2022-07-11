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

vector<int> preOrder(Node *root){
    vector<int > preorder;
    if (root==NULL) return preorder;

    stack<Node *> st;
    st.push(root);

    while(!st.empty()){
        root=st.top();
        st.pop();
        preorder.push_back(root->data);

        if(root->right!=NULL) st.push(root->right);
        if(root->left!=NULL) st.push(root->left);
    }
    return preorder;
}
vector<int> inOrder(Node *root){

    vector<int>inorder;
    stack<Node *>st;
    Node *node =root;

    while(true){
        if(node!=NULL){
            st.push(node);
            node=node->left;
        }
        else{
            if(st.empty()==true) break;
            node=st.top();
            st.pop();
            inorder.push_back(node->data);
            node=node->right;

        }
    }
    return inorder;
}

vector<int> postOrder(Node *root){
    vector<int>postorder;
    if(root==NULL) return postorder;

    stack<Node *>st1;
    stack<Node *>st2;

    st1.push(root);
    while(!st1.empty()){
        root=st1.top();
        st1.pop();
        st2.push(root);

        if(root->left!=NULL) st1.push(root->left);
        if(root->right!=NULL) st1.push(root->right);

    }
    while(!st2.empty()){
        postorder.push_back(st2.top()->data);
        st2.pop();
    }
    return postorder;



}


int main(){
    struct Node *root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);

    vector<int> preorder=preOrder(root);
    for(auto i: preorder) cout<<i<<" ";
    cout<<endl;
    vector<int> postorder=postOrder(root);
    for(auto i: postorder) cout<<i<<" ";
    cout<<endl;
    vector<int> inorder=inOrder(root);
    for(auto i: inorder) cout<<i<<" ";

    

}
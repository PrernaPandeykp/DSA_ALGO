/*  Print all k-sum paths in a binary tree
    In this problem, we are given a binary tree and a number K and we have to print all paths in the tree which have the sum of nodes in the path equal k.*/


#include <bits/stdc++.h>
using namespace std;
struct Node {
   int data;
   Node *left,*right;
   Node(int x){
      data = x;
      left = right = NULL;
   }
};
void printPath(const vector<int>& v, int i) {
   for (int j=i; j<v.size(); j++)
      cout<<v[j]<<"\t";
   cout<<" ";
}
void findKSumPath(Node *root, vector<int>& path, int k) {
   if (!root)
      return;
   path.push_back(root->data);
   findKSumPath(root->left, path, k);
   findKSumPath(root->right, path, k);
   int f = 0;
   for (int j=path.size()-1; j>=0; j--){
      f += path[j];
      if (f == k)
         printPath(path, j);
   }
   path.pop_back();
}
int main() {
   Node *root = new Node(1);
   root->left = new Node(3);
   root->left->left = new Node(1);
   root->left->right = new Node(2);
   root->right = new Node(4);
   root->right->right = new Node(7);
   int k = 5;
   cout<<"Paths with sum "<<k<<" are : ";
   vector<int> path;
   findKSumPath(root, path, k);
   return 0;
}


/*
Output:
Paths with sum 5 are −
1 3 1
3 2
1 4
*/
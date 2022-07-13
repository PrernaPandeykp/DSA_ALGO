/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */


//// 1
class Solution {
public:
    vector<int> ans;
    
    vector<int> rightSideView(TreeNode* root) {
        if(root==NULL)return ans;
        
		queue<TreeNode*>q;
        q.push(root);

		while(!q.empty()){
            int s=q.size();
            int data=0;
			
            while(s){
                TreeNode*temp=q.front();
                q.pop();
                data=temp->val;
                if(temp->left!=NULL)q.push(temp->left);
                if(temp->right!=NULL)q.push(temp->right);
                s--;
            }
			
			// Simply push ush the last value
            ans.push_back(data);
        }
        return ans;
    }
    
};



///// 2

class Solution {
public:
    vector<int> ans;
    
    vector<int> rightSideView(TreeNode* root) {
        if(root==NULL)return ans;
        
		queue<TreeNode*>q;
        q.push(root);

		while(!q.empty()){
            int s=q.size();
            int data=0;
			
            while(s){
                TreeNode*temp=q.front();
                q.pop();
                data=temp->val;
                if(temp->left!=NULL)q.push(temp->left);
                if(temp->right!=NULL)q.push(temp->right);
                s--;
            }
			
			// Simply push ush the last value
            ans.push_back(data);
        }
        return ans;
    }
    
};
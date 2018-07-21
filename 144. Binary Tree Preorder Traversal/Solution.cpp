/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    void helper(TreeNode* root,vector<int>& res){
         stack<TreeNode*> S;
        S.push(root);
        while(!S.empty()){
            TreeNode* p=S.top();S.pop();res.push_back(p->val);
            if(p->right!=NULL){S.push(p->right);}
            if(p->left!=NULL){S.push(p->left);}
        }
    }
    
    
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        if(root==NULL) return res;
        
        helper(root,res);
        return res;
    }
};
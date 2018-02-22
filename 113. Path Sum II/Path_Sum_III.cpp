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
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<int> s ;vector<vector<int>> result;
         helper(root,sum,s,result);
        return result;
    }
    
    void helper(TreeNode* node, int sum,vector<int> s ,vector<vector<int>>&result)
    {
        if(node==NULL) return ;
        s.push_back(node->val);
        if(node->right==NULL&&node->left==NULL&&sum==node->val) result.push_back(s);
        if(node->left!=NULL) helper(node->left,sum-node->val,s,result);
        if(node->right!=NULL) helper(node->right,sum-node->val,s,result);
       
    }
};